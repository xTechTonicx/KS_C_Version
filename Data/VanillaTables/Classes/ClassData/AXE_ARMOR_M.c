#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassAxeArmorM = {
        .nameTextId = MSG_CLASS_AXE_ARMOUR_NAME,
        .descTextId = MSG_CLASS_AXE_ARMOUR_DESC,
        .number = CLASS_AXE_ARMOR_M,
        .promotion = CLASS_GENERAL,
        .SMSId = CLASS_AXE_ARMOR_M - 1,
        .slowWalking = UNIT_WALKSPEED_SLOW,
        .defaultPortraitId = 0x76,
        .sort_order = 0xc,

        .baseHP  = 27,
        .basePow = 7,
        .baseSkl = 5,
        .baseSpd = 0,
        .baseDef = 10,
        .baseRes = 4,
        .baseCon = 12,
        .baseMov = 4,
        .baseLuck = 2,

        .maxHP  = 45,
        .maxPow = 20,
        .maxSkl = 16,
        .maxSpd = 14,
        .maxDef = 20,
        .maxRes = 15,
        .maxCon = 20,

        .growthHP  = 100,
        .growthPow = 45,
        .growthSkl = 45,
        .growthSpd = 25,
        .growthDef = 50,
        .growthRes = 40,
        .growthLck = 35,

        .promotionHp  = 0,
        .promotionPow = 0,
        .promotionSkl = 0,
        .promotionSpd = 0,
        .promotionDef = 0,
        .promotionRes = 0,

        .baseRanks = {
            [ITYPE_AXE] = WPN_EXP_E,
        },
        .pBattleAnimDef = ARMOR_U_REF,
        .pMovCostTable = {
            TerrainTable_MovCost_ArmorNormal,
            TerrainTable_MovCost_ArmorRain,
            TerrainTable_MovCost_ArmorSnow,
        },
        .pTerrainAvoidLookup = TerrainTable_Avo_Common,
        .pTerrainDefenseLookup = TerrainTable_Def_Common,
        .pTerrainResistanceLookup = TerrainTable_Res_Common,
};