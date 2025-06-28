#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData NomadF = {
    .nameTextId = MSG_CLASS_NOMAD_NAME,
    .descTextId = MSG_CLASS_NOMAD_DESC,
    .number = CLASS_NOMAD_F,
    .promotion = CLASS_PALADIN,
    .SMSId = CLASS_NOMAD_F - 1,
    .defaultPortraitId = 0x80,
    .sort_order = 0x20,

    .baseHP  = 23,
    .basePow = 5,
    .baseSkl = 6,
    .baseSpd = 8,
    .baseDef = 4,
    .baseRes = 5,
    .baseCon = 7,
    .baseMov = 7,

    .maxHP  = 45,
    .maxPow = 15,
    .maxSkl = 18,
    .maxSpd = 18,
    .maxDef = 14,
    .maxRes = 17,
    .maxCon = 25,
    .baseLuck = 8,


    .growthHP  = 80,
    .growthPow = 35,
    .growthSkl = 15,
    .growthSpd = 45,
    .growthDef = 35,
    .growthRes = 50,
    .growthLck = 40,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTEDAID | CA_CANTO | CA_MOUNTED,

    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_E,
    },
    .pBattleAnimDef = NOMAD_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Rain,
        TerrainTable_MovCost_HorseT1Snow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};