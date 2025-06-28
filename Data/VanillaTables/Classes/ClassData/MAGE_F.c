#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData MageF = {
    .nameTextId = MSG_CLASS_MAGE_NAME,
    .descTextId = MSG_CLASS_MAGE_DESC,
    .number = CLASS_MAGE_F,
    .promotion = CLASS_SAGE_F,
    .SMSId = CLASS_MAGE_F - 1,
    .defaultPortraitId = 0x7c,
    .sort_order = 0x12,

    .baseHP  = 21,
    .basePow = 0,
    .baseSkl = 5,
    .baseSpd = 5,
    .baseDef = 1,
    .baseRes = 5,
    .baseCon = 4,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 14,
    .maxSkl = 17,
    .maxSpd = 17,
    .maxDef = 12,
    .maxRes = 18,
    .maxCon = 20,
    .baseLuck = 7,


    .growthHP  = 75,
    .growthPow = 0,
    .growthSkl = 50,
    .growthSpd = 40,
    .growthDef = 25,
    .growthRes = 55,
    .growthLck = 20,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_FEMALE,

    .baseRanks = {
        [ITYPE_ANIMA] = WPN_EXP_E,
    },
    .pBattleAnimDef = MAGE_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicRain,
        TerrainTable_MovCost_MagicSnow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,

};