#include "common-chax.h"
#include "GroupAi.h"
#include "kernel-lib.h"

void ActivateUnit(struct Unit *unit)
{
	unit->ai1 = AI_A_00;
	unit->ai2 = AI_B_0F;
	unit->aiGroup = 0;
}

void SetUnitAiGroup(struct Unit *unit, u8 aiGroup)
{
	unit->aiGroup = aiGroup;
}

void UnitHandleGroupAi(struct Unit *unit)
{
	u8 group = unit->aiGroup;

	if (group == 0)
		return;

	ActivateUnit(unit);

	FOR_UNITS_ONMAP_FACTION(UNIT_FACTION(unit), u, {
		Debugf("Running for unit %d", u->index & 0xFF);
		if (UNIT_AI_GROUP(u) == group) {
			Debug("Activating unit");
			ActivateUnit(u);
		}
	});
}

void HandleGroupAi()
{
	Debugf("gAiState.unitIt: %u, gAiState.unit at gAiState: %u", *gAiState.unitIt, gAiState.units[*gAiState.unitIt]);
	Debugf("Attacker unit index: %d", gBattleActor.unit.index & 0xFF);
	Debugf("Attacker group is %u", gBattleActor.unit.aiGroup);
	UnitHandleGroupAi(&gBattleActor.unit);
}