#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassMilitiaF = {
    .nameTextId = MSG_CLASS_MILITIA_NAME,
    .descTextId = MSG_CLASS_MILITIA_DESC,
    .number = CLASS_MILITIA_F,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_MILITIA_F - 1,
    .defaultPortraitId = SOLDIER_CARD,
    .sort_order = 0x2,

    .baseHP  = 29,
    .basePow = 7,
    .baseSkl = 4,
    .baseSpd = 7,
    .baseDef = 4,
    .baseRes = 0,
    .baseCon = 8,
    .baseMov = 5,
    .baseLuck = 8,

    .maxHP  = 45,
    .maxPow = 20,
    .maxSkl = 20,
    .maxSpd = 20,
    .maxDef = 15,
    .maxRes = 15,
    .maxCon = 20,


    .growthHP  = 90,
    .growthPow = 50,
    .growthSkl = 20,
    .growthSpd = 40,
    .growthDef = 25,
    .growthRes = 25,
    .growthLck = 50,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_FEMALE,

    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_E,
    },
    .pBattleAnimDef = MILITIA_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};