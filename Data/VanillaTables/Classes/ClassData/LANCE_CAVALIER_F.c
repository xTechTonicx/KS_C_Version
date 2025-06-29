#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassLanceCavF = {
    .nameTextId = MSG_CLASS_LANCE_CAV_NAME,
    .descTextId = MSG_CLASS_LANCE_CAV_DESC,
    .number = CLASS_LANCE_CAVALIER_F,
    .promotion = CLASS_PALADIN,
    .SMSId = CLASS_LANCE_CAVALIER_F - 1,
    .defaultPortraitId = 0x80,
    .sort_order = 0x20,

    .baseHP  = 28,
    .basePow = 6,
    .baseSkl = 5,
    .baseSpd = 5,
    .baseDef = 7,
    .baseRes = 2,
    .baseCon = 9,
    .baseMov = 7,

    .maxHP  = 45,
    .maxPow = 18,
    .maxSkl = 18,
    .maxSpd = 17,
    .maxDef = 17,
    .maxRes = 16,
    .maxCon = 25,
    .baseLuck = 4,


    .growthHP  = 85,
    .growthPow = 40,
    .growthSkl = 40,
    .growthSpd = 30,
    .growthDef = 40,
    .growthRes = 35,
    .growthLck = 30,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTEDAID | CA_CANTO | CA_MOUNTED | CA_FEMALE,

    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_E,
    },
    .pBattleAnimDef = CAVALIER_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Rain,
        TerrainTable_MovCost_HorseT1Snow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};