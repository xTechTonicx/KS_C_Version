#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharYulie =
{
    .nameTextId = YulieName,
    .descTextId = YulieDesc,
    .number = CHARACTER_YULIE,
    .defaultClass = CLASS_OUTLAW_F,
    .portraitId = PORTRAIT_YULIE_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = CHARACTER_YULIE,
    .baseLevel = 5,
    .baseHP  = 5,
    .basePow = 3,
    .baseSkl = 7,
    .baseSpd = 5,
    .baseDef = 3,
    .baseRes = 0,
    .baseLck = 6,
    .baseCon = 0,
    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_B,
    },
    .growthHP  = 150,
    .growthPow = 40,
    .growthSkl = 0,
    .growthSpd = 65,
    .growthDef = 40,
    .growthRes = 40,
    .growthLck = 50,
    .attributes = CA_FEMALE | CA_BOSS,
};