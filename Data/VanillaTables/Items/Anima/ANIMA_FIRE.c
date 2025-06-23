#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemAnimaFire = {
	.nameTextId = MSG_FIRE,
	.descTextId = MSG_FIRE_DESC,
	.number = ITEM_ANIMA_FIRE,
	.weaponType = ITYPE_ANIMA,
	.attributes = IA_WEAPON | IA_MAGIC | IA_UNBREAKABLE,
	.maxUses = 1,
	.might = 10,
	.hit = 90,
	.weight = 4,
	.crit = 0xFF,
	.encodedRange = 0x12,
	.costPerUse = 500,
	.weaponRank = WPN_EXP_E,
	.iconId = 0x3d,
	.weaponExp = 1,
};