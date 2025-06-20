#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassLancePegasusM = {
    .nameTextId = 0x2e7,
    .descTextId = 0x333,
    .number = CLASS_LANCE_PEGASUS_M,
    .promotion = CLASS_FALCON_KNIGHT,
    .SMSId = CLASS_LANCE_PEGASUS_M - 1,
    .defaultPortraitId = 0x86,
    .sort_order = 0x10,

    .baseHP  = 26,
    .basePow = 5,
    .baseSkl = 8,
    .baseSpd = 9,
    .baseDef = 3,
    .baseRes = 9,
    .baseCon = 8,
    .baseMov = 7,

    .maxHP  = 45,
    .maxPow = 17,
    .maxSkl = 20,
    .maxSpd = 19,
    .maxDef = 15,
    .maxRes = 20,
    .maxCon = 25,
    .baseLuck = 9,


    .growthHP  = 80,
    .growthPow = 35,
    .growthSkl = 50,
    .growthSpd = 40,
    .growthDef = 35,
    .growthRes = 65,
    .growthLck = 50,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTEDAID | CA_CANTO | CA_PEGASUS,

    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AF4DC,
    .pMovCostTable = {
        TerrainTable_MovCost_FlyNormal,
        TerrainTable_MovCost_FlyRain,
        TerrainTable_MovCost_FlySnow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Fly,
    .pTerrainDefenseLookup = TerrainTable_Def_Fly,
    .pTerrainResistanceLookup = TerrainTable_Res_Fly,
};