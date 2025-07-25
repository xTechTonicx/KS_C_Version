#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharFester =
{
    .nameTextId = FesterName,
    .descTextId = FesterDesc,
    .number = CHARACTER_FESTER,
    .defaultClass = CLASS_SWORDFIGHTER_M,
    .portraitId = PORTRAIT_FESTER_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 4,
    .baseHP  = 5,
    .basePow = 2,
    .baseSkl = 2,
    .baseSpd = 2,
    .baseDef = 1,
    .baseRes = -1,
    .baseLck = 6,
    .baseCon = 0,
    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_B,
    },
    .growthHP  = 140,
    .growthPow = 40,
    .growthSkl = 100,
    .growthSpd = 65,
    .growthDef = 20,
    .growthRes = 10,
    .growthLck = 50,
    .attributes = CA_BOSS
};