#include "common-chax.h"
#include "skill-system.h"
#include "status-getter.h"
#include "constants/skills.h"
#include "KSDefinitions.h"
#include "strmag.h"

#define UNPROMOTED_ATTUNEMENT_BONUS 25
#define PROMOTED_ATTUNEMENT_BONUS 40

u8 GetUnitMaxAttunement(struct Unit* unit) {
    u8 bonus;

    if (UNIT_CATTRIBUTES(unit) & CA_PROMOTED)
        bonus = PROMOTED_ATTUNEMENT_BONUS;
    else
        bonus = UNPROMOTED_ATTUNEMENT_BONUS;
    
    return unit->skl + UNIT_MAG(unit) + bonus;
}

void UnitInitializeAttunement(struct Unit *unit) {
    // Debugf("Unit %d attunement before: %d", unit->index, unit->attunement);
    // Debugf("Unit stats are %d magic and %d skill", UNIT_MAG(unit), unit->skl);
    unit->attunement = GetUnitMaxAttunement(unit);
    // Debugf("Unit %d attunement after: %d", unit->index, unit->attunement);
}