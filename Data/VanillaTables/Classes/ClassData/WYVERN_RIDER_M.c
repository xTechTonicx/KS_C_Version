#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassWyvernRiderM = {
    .nameTextId = 0x2ce,
    .descTextId = 0x31a,
    .number = CLASS_WYVERN_RIDER_M,
    .promotion = CLASS_WYVERN_LORD,
    .SMSId = CLASS_WYVERN_RIDER_M,
    .defaultPortraitId = 0x88,
    .sort_order = 0xd,

    .baseHP  = 27,
    .basePow = 7,
    .baseSkl = 5,
    .baseSpd = 2,
    .baseDef = 10,
    .baseRes = 0,
    .baseCon = 11,
    .baseMov = 6,
    .baseLuck = 2,

    .maxHP  = 45,
    .maxPow = 19,
    .maxSkl = 17,
    .maxSpd = 15,
    .maxDef = 20,
    .maxRes = 14,
    .maxCon = 25,

    .growthHP  = 90,
    .growthPow = 45,
    .growthSkl = 40,
    .growthSpd = 30,
    .growthDef = 45,
    .growthRes = 30,
    .growthLck = 20,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTEDAID | CA_CANTO | CA_WYVERN,
    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },

    .pBattleAnimDef = AnimConf_088AF1D0,
    .pMovCostTable = {
        TerrainTable_MovCost_FlyNormal,
        TerrainTable_MovCost_FlyNormal,
        TerrainTable_MovCost_FlyNormal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Fly,
    .pTerrainDefenseLookup = TerrainTable_Def_Fly,
    .pTerrainResistanceLookup = TerrainTable_Res_Fly,
};