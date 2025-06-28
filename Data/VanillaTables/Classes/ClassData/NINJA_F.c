#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassNinjaF = {
    .nameTextId = MSG_CLASS_NINJA_NAME,
    .descTextId = MSG_CLASS_NINJA_DESC,
    .number = CLASS_NINJA_F,
    .promotion = CLASS_ASSASSIN,
    .SMSId = CLASS_NINJA_F - 1,
    .defaultPortraitId = 0x8e,
    .sort_order = 0x7,

    .baseHP  = 23,
    .basePow = 4,
    .baseSkl = 12,
    .baseSpd = 9,
    .baseDef = 2,
    .baseRes = 5,
    .baseCon = 5,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 15,
    .maxSkl = 20,
    .maxSpd = 20,
    .maxDef = 13,
    .maxRes = 19,
    .maxCon = 20,
    .baseLuck = 7,


    .growthHP  = 85,
    .growthPow = 35,
    .growthSkl = 60,
    .growthSpd = 45,
    .growthDef = 30,
    .growthRes = 50,
    .growthLck = 45,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_STEAL | CA_THIEF | CA_FEMALE,

    .baseRanks = {
        [ITYPE_LIGHT] = WPN_EXP_E,
    },
    .pBattleAnimDef = NINJA_M_REF,

    .pMovCostTable = {
        TerrainTable_MovCost_ThiefNormal,
        TerrainTable_MovCost_ThiefRain,
        TerrainTable_MovCost_ThiefSnow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};