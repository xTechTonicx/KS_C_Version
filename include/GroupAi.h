void SetUnitAiGroup(struct Unit *unit, const struct UnitDefinition* uDef);

#define UNIT_AI_GROUP(aUnit) aUnit->aiGroup
#define CLEAR_UNIT_AI_GROUP(aUnit) aUnit->aiGroup = 0;

void HandleGroupAi();