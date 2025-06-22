#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassUmbralBishopF = {
    .nameTextId = MSG_CLASS_UMBRAL_BISHOP_NAME,
    .descTextId = MSG_CLASS_UMBRAL_BISHOP_DESC,
    .number = CLASS_UMBRAL_BISHOP_F,
    .promotion = 0x0,
    .SMSId = CLASS_UMBRAL_BISHOP_F - 1,
    .defaultPortraitId = 0x7c,
    .sort_order = 0x12,

    .baseHP  = 31,
    .basePow = 2,
    .baseSkl = 11,
    .baseSpd = 8,
    .baseDef = 12,
    .baseRes = 14,
    .baseCon = 10,
    .baseMov = 6,

    .maxHP  = 70,
    .maxPow = 20,
    .maxSkl = 25,
    .maxSpd = 25,
    .maxDef = 25,
    .maxRes = 30,
    .maxCon = 20,
    .baseLuck = 13,


    .growthHP  = 80,
    .growthPow = 0,
    .growthSkl = 60,
    .growthSpd = 30,
    .growthDef = 35,
    .growthRes = 40,
    .growthLck = 66,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_PROMOTED | CA_FEMALE,

    .baseRanks = {
        [ITYPE_DARK] = WPN_EXP_E,
        [ITYPE_STAFF] = WPN_EXP_E,
    },
    .pBattleAnimDef = UMBRALBISHOP_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicRain,
        TerrainTable_MovCost_MagicSnow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};