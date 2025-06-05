void SetUnitAiGroup(struct Unit *unit, u8 group);

#define UNIT_AI_GROUP(aUnit) aUnit->aiGroup
#define CLEAR_UNIT_AI_GROUP(aUnit) aUnit->aiGroup = 0;

void HandleGroupAi();