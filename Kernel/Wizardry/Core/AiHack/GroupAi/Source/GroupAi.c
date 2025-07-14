#include "common-chax.h"
#include "GroupAi.h"
#include "kernel-lib.h"

LYN_REPLACE_CHECK(CharStoreAI);
void CharStoreAI(struct Unit* unit, const struct UnitDefinition* uDef) {
    unit->ai1 = uDef->ai[UDEF_AIIDX_AI_A];

    unit->ai2 = uDef->ai[UDEF_AIIDX_AI_B];

    unit->ai_config &= ~AI_UNIT_CONFIG_HEALTHRESHOLD_MASK; // clear heal threshold
    unit->ai_config |= uDef->ai[UDEF_AIIDX_AI_CONF_L];
    unit->ai_config |= (uDef->ai[UDEF_AIIDX_AI_CONF_H] << 8);
	SetUnitAiGroup(unit, uDef);
    return;
}

void ActivateUnit(struct Unit *unit)
{
	Debugf("Activating unit %u", unit->index & 0xFF);
	unit->ai1 = AI_A_00;
	unit->ai_a_pc = 0;
	unit->ai2 = AI_B_00;
	unit->ai_b_pc = 0;
	unit->aiGroup = 0;
	if (gPlaySt.faction == FACTION_RED && unit->state & US_HAS_MOVED_AI && !(unit->state & (US_UNSELECTABLE | US_HIDDEN | US_DEAD))) {
		Debug("Fiddling with AI");
		unit->state &= ~US_HAS_MOVED_AI;
		*(--gAiState.unitIt) = unit->index & 0xFF;
	}
}

void SetUnitAiGroup(struct Unit *unit, const struct UnitDefinition* uDef)
{
	unit->aiGroup = (u8)uDef->leaderCharIndex;
}

bool UnitHandleGroupAi(struct Unit *unit)
{
	u8 group = unit->aiGroup;

	if (group == 0)
		return false;

	ActivateUnit(GetUnit(unit->index));

	FOR_UNITS_ONMAP_FACTION(UNIT_FACTION(unit), u, {
		Debugf("Running for unit %d", u->index & 0xFF);
		if (UNIT_AI_GROUP(u) == group) {
			ActivateUnit(u);
		}
	});

	GetROMChapterStruct(gPlaySt.chapterIndex)->groupAiFunc(group);

	return true;
}

void HandleGroupAi()
{
	//Debugf("gAiState.unitIt: %u, gAiState.unit at gAiState: %u", *gAiState.unitIt, gAiState.units[*gAiState.unitIt]);
	//Debugf("Attacker unit index: %d", gBattleActor.unit.index & 0xFF);
	//Debugf("Attacker group is %u", gBattleActor.unit.aiGroup);
	if (!UnitHandleGroupAi(&gBattleActor.unit))
		UnitHandleGroupAi(&gBattleTarget.unit);
}

void ActivateGroup(u8 group)
{
	FOR_UNITS_ONMAP_FACTION(FACTION_RED, u, {
		if (UNIT_AI_GROUP(u) == group) {
			ActivateUnit(u);
		}
	});
}

void ActivateGroupASMC()
{
	ActivateGroup((u8)gEventSlots[1]);
}