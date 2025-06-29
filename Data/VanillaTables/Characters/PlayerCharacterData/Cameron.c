#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharCameron =
{
    .nameTextId = CameronName,
    .descTextId = CameronDesc,
    .number = CHARACTER_CAMERON,
    .defaultClass = CLASS_AXE_ARMOR_M,
    .portraitId = PORTRAIT_CAMERON_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = CHARACTER_CAMERON,
    .baseLevel = 4, 
    .baseHP  = 6,
    .basePow = 4,
    .baseSkl = 4,
    .baseSpd = 2,
    .baseDef = 1,
    .baseRes = 0,
    .baseLck = 8,
    .baseCon = 1,   
    
    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_C,
    },
      
    .growthHP  = 115,
    .growthPow = 75,
    .growthSkl = 40,
    .growthSpd = 30,
    .growthDef = 70,
    .growthRes = 15,
    .growthLck = 75,
    .attributes = 0x0,
    .pSupportData = &SupportData_Seth,
    .visit_group = 0x7
};