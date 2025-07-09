#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassSwordfigherM = {
    .nameTextId = MSG_CLASS_SWORDFIGHTER_NAME,
    .descTextId = MSG_CLASS_SWORDFIGHTER_DESC,
    .number = CLASS_SWORDFIGHTER_M,
    .promotion = CLASS_SWORDMASTER,
    .SMSId = CLASS_SWORDFIGHTER_M - 1,
    .defaultPortraitId = SWORDFIGHTER_CARD,
    .sort_order = 0x2,

    .baseHP  = 26,
    .basePow = 6,
    .baseSkl = 11,
    .baseSpd = 10,
    .baseDef = 3,
    .baseRes = 5,
    .baseCon = 7,
    .baseMov = 5,
    .baseLuck = 8,

    .maxHP  = 45,
    .maxPow = 16,
    .maxSkl = 20,
    .maxSpd = 20,
    .maxDef = 16,
    .maxRes = 17,
    .maxCon = 20,

    .growthHP  = 75,
    .growthPow = 40,
    .growthSkl = 45,
    .growthSpd = 50,
    .growthDef = 30,
    .growthRes = 40,
    .growthLck = 45,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_E,
    },
    .pBattleAnimDef = SWORDFIGHTER_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};