#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassBrigandM = {
    .nameTextId = MSG_CLASS_FIGHTER_NAME,
    .descTextId = MSG_CLASS_FIGHTER_DESC,
    .number = CLASS_FIGHTER_M,
    .promotion = CLASS_BERSERKER,
    .SMSId = CLASS_FIGHTER_M - 1,
    .defaultPortraitId = FIGHTER_CARD,
    .sort_order = 0x2,

    .baseHP  = 33,
    .basePow = 8,
    .baseSkl = 7,
    .baseSpd = 6,
    .baseDef = 3,
    .baseRes = 0,
    .baseCon = 11,
    .baseMov = 5,
    .baseLuck = 1,

    .maxHP  = 45,
    .maxPow = 20,
    .maxSkl = 18,
    .maxSpd = 18,
    .maxDef = 15,
    .maxRes = 14,
    .maxCon = 20,


    .growthHP  = 95,
    .growthPow = 55,
    .growthSkl = 30,
    .growthSpd = 40,
    .growthDef = 25,
    .growthRes = 20,
    .growthLck = 20,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },
    
    .pBattleAnimDef = FIGHTER_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_BrigandNormal,
        TerrainTable_MovCost_BrigandNormal,
        TerrainTable_MovCost_BrigandNormal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};