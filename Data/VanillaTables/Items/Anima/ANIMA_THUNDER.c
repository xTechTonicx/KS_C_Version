#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemLightLightning = {
    .nameTextId = MSG_THUNDER,
	.descTextId = MSG_THUNDER_DESC,
	.number = ITEM_ANIMA_THUNDER,
	.weaponType = ITYPE_ANIMA,
	.attributes = IA_WEAPON | IA_MAGIC | IA_UNBREAKABLE,
	.maxUses = 1,
	.might = 12,
	.hit = 95,
	.weight = 40,
	.crit = 0xFF,
	.encodedRange = 0x13,
	.costPerUse = 500,
	.weaponRank = WPN_EXP_E,
	.iconId = 0x3d,
	.weaponExp = 1,
};