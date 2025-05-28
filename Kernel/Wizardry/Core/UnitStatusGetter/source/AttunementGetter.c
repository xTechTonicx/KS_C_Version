#include "common-chax.h"
#include "skill-system.h"
#include "status-getter.h"
#include "constants/skills.h"
#include "KSDefinitions.h"

#define UNPROMOTED_ATTUNEMENT_BONUS 25
#define PROMOTED_ATTUNEMENT_BONUS 40

u8 GetUnitMaxAttunement(struct Unit* unit) {
    u8 bonus;

    if (UNIT_CATTRIBUTES(unit) & CA_PROMOTED)
        bonus = PROMOTED_ATTUNEMENT_BONUS;
    else
        bonus = UNPROMOTED_ATTUNEMENT_BONUS;
    
    return unit->skl + MagGetter(unit) + bonus;
}