#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassTroubadourF = {
    .nameTextId = MSG_CLASS_TROUBADOUR_NAME,
    .descTextId = MSG_CLASS_TROUBADOUR_DESC,
    .number = CLASS_TROUBADOUR_F,
    .promotion = CLASS_VALKYRIE,
    .SMSId = CLASS_TROUBADOUR_F - 1,
    .defaultPortraitId = 0x82,
    .sort_order = 0x19,

    .baseHP  = 25,
    .basePow = 4,
    .baseSkl = 6,
    .baseSpd = 7,
    .baseDef = 3,
    .baseRes = 3,
    .baseCon = 6,
    .baseMov = 7,

    .maxHP  = 45,
    .maxPow = 17,
    .maxSkl = 18,
    .maxSpd = 19,
    .maxDef = 15,
    .maxRes = 18,
    .maxCon = 25,
    .baseLuck = 6,


    .growthHP  = 75,
    .growthPow = 35,
    .growthSkl = 45,
    .growthSpd = 40,
    .growthDef = 25,
    .growthRes = 40,
    .growthLck = 50,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTEDAID | CA_CANTO | CA_MOUNTED | CA_FEMALE,

    .baseRanks = {
        [ITYPE_STAFF] = WPN_EXP_E,
        [ITYPE_SWORD] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AF504,
    .pMovCostTable = {
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Rain,
        TerrainTable_MovCost_HorseT1Snow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};