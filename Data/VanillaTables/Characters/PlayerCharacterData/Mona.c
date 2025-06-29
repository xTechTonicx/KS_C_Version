#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharMona =
{
    .nameTextId = MonaName,
    .descTextId = MonaDesc,
    .number = CHARACTER_MONA,
    .defaultClass = CLASS_TROUBADOUR_F,
    .portraitId = PORTRAIT_MONA_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = CHARACTER_MONA,
    .baseLevel = 3, 
    .baseHP  = 0,
    .basePow = 4,
    .baseSkl = 4,
    .baseSpd = 1,
    .baseDef = 1,
    .baseRes = -1,
    .baseLck = 11,
    .baseCon = 0,   
    
    .baseRanks = {
        [ITYPE_STAFF] = WPN_EXP_D,
        [ITYPE_SWORD] = WPN_EXP_E,
    },
      
    .growthHP  = 90,
    .growthPow = 55,
    .growthSkl = 60,
    .growthSpd = 65,
    .growthDef = 35,
    .growthRes = 25,
    .growthLck = 35,
    .attributes = 0x0,
    .pSupportData = &SupportData_Seth,
    .visit_group = 0x7
};