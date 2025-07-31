#pragma once

#include "kernel-lib.h"
#include "debuff.h"

#define STAT_DEBUFF_BITS 6
#define STAT_DEBUFF_MAX_AMOUNT 63
#define STAT_TICK_PER_TURN 1
#define SEAL_SKILL_PENALTY 5

void TickUnitGradualDebuffs(struct Unit* unit);
void InflictGradualStatDebuff(struct Unit* unit, enum UnitStatusIdxRef stat, int amount, bool stacking);
void ResetStatDebuffPositiveType(struct Unit *unit);