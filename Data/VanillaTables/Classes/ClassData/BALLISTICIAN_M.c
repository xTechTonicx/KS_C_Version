#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData BallisticianM = {
    .nameTextId = MSG_CLASS_ARCHER_NAME,
    .descTextId = MSG_CLASS_ARCHER_DESC,
    .number = CLASS_BALLISTICIAN_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_BALLISTICIAN_M - 1,
    .defaultPortraitId = ARCHER_CARD,
    .sort_order = 0x2,

    .baseHP  = 24,
    .basePow = 10,
    .baseSkl = 7,
    .baseSpd = 0,
    .baseDef = 7,
    .baseRes = 1,
    .baseCon = 20,
    .baseMov = 0,
    .baseLuck = 0,

    .maxHP  = 70,
    .maxPow = 30,
    .maxSkl = 30,
    .maxSpd = 10,
    .maxDef = 20,
    .maxRes = 20,
    .maxCon = 20,



    .growthHP  = 90,
    .growthPow = 50,
    .growthSkl = 50,
    .growthSpd = 5,
    .growthDef = 40,
    .growthRes = 15,
    .growthLck = 30,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_PROMOTED,

    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_E,
    },

    .pBattleAnimDef = BALLISTA_U_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};