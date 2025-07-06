#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemMendStaff = {
	.nameTextId = MSG_MEND,
	.descTextId = MSG_DESC_MEND,
	.useDescTextId = MSG_DESC_MEND,
	.number = ITEM_STAFF_MEND,
	.weaponType = ITYPE_STAFF,
	.attributes = IA_STAFF,
	.maxUses = 30,
	.hit = 100,
	.weight = 2,
	.encodedRange = 0x11,
	.costPerUse = 40,
	.weaponRank = WPN_EXP_D,
	.iconId = 0x49, // TODO Update Icon
	.useEffectId = 2,
	.weaponExp = 2,
};