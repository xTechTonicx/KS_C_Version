#include "debuff.h"
#include "KSDefinitions.h"
#include "kernel-lib.h"

int GetCurrentTickingDebuff(u32* bitfile, enum UNIT_STAT_GRADUAL_DEBUFF_START_IDX start) {
	int sum = 0;
	
	for (int i = start; i < start + STAT_DEBUFF_BITS; i++) {
		if (_BIT_CHK(bitfile, i))
		sum += 1 << (i - start);
	}
	
	return sum;
}

void SetCurrentTickingDebuff(u32* bitfile, enum UNIT_STAT_GRADUAL_DEBUFF_START_IDX start, int newDebuff) {
	// Debugf("Setting new debuff to %d", newDebuff);
	for (int i = start; i < start + STAT_DEBUFF_BITS; i++){
		int currentCheck = 1 << (i - start);
		if(newDebuff & currentCheck) {
			// Debugf("Bitwise and succeded for newDebuff %d and currentCheck %d", newDebuff, currentCheck);
			_BIT_SET(bitfile, i);
			newDebuff -= currentCheck;
		} else {
			_BIT_CLR(bitfile, i);
		}
	}
}

void TickGradualStatDebuff(u32* bitfile, enum UNIT_STAT_GRADUAL_DEBUFF_START_IDX start, bool* ticked) {
	int debuff = GetCurrentTickingDebuff(bitfile, start);
	if (debuff) {
		*ticked = true;
		debuff -= STAT_TICK_PER_TURN;
		if (debuff < 0)
			debuff = 0;
		SetCurrentTickingDebuff(bitfile, start, debuff);
	}
}

void InflictBitfileStatDebuff(u32* bitfile, enum UNIT_STAT_GRADUAL_DEBUFF_START_IDX stat, int amount, bool stacking) {
	int newDebuff, currentDebuff = GetCurrentTickingDebuff(bitfile, stat);
	if (stacking)
		newDebuff = currentDebuff + amount;
	else if (amount > currentDebuff)
		newDebuff = amount;
	else        // !stacking || amount <= currentDebuff
		return; // Don't need to do anything
	
	if (newDebuff > STAT_DEBUFF_MAX_AMOUNT)
		newDebuff = STAT_DEBUFF_MAX_AMOUNT;
	
	SetCurrentTickingDebuff(bitfile, stat, newDebuff);
}

void InflictUnitStatDebuff(struct Unit* unit, enum UNIT_STAT_GRADUAL_DEBUFF_START_IDX stat, int amount, bool stacking) {
	InflictBitfileStatDebuff(GetUnitStatDebuffStatus(unit)->st.bitmask, stat, amount, stacking);
	ResetStatDebuffPositiveType(unit);
}

void TickUnitGradualDebuffs(struct Unit *unit) {
	u32* bitfile = GetUnitStatDebuffStatus(unit)->st.bitmask;
	bool ticked = false;
	
	TickGradualStatDebuff(bitfile, STR_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, MAG_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, SKL_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, SPD_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, LCK_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, DEF_DEBUFF_START, &ticked);
	TickGradualStatDebuff(bitfile, RES_DEBUFF_START, &ticked);
	if (ticked)
		ResetStatDebuffPositiveType(unit);
}
