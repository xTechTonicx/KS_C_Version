#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassCantorM = {
    .nameTextId = 0x2d1,
    .descTextId = 0x31d,
    .number = CLASS_CANTOR_M,
    .promotion = 0x0,
    .SMSId = CLASS_CANTOR_M - 1,
    .defaultPortraitId = 0x7c,
    .sort_order = 0x12,

    .baseHP  = 35,
    .basePow = 0,
    .baseSkl = 8,
    .baseSpd = 6,
    .baseDef = 13,
    .baseRes = 13,
    .baseCon = 14,
    .baseMov = 6,

    .maxHP  = 70,
    .maxPow = 20,
    .maxSkl = 22,
    .maxSpd = 22,
    .maxDef = 26,
    .maxRes = 26,
    .maxCon = 20,
    .baseLuck = 13,


    .growthHP  = 100,
    .growthPow = 0,
    .growthSkl = 40,
    .growthSpd = 25,
    .growthDef = 40,
    .growthRes = 40,
    .growthLck = 66,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_PROMOTED,

    .baseRanks = {
        [ITYPE_DARK] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AF234,
    .pMovCostTable = {
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicRain,
        TerrainTable_MovCost_MagicSnow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};