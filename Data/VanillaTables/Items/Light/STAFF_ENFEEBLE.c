#include "common-chax.h"
#include "KSDefinitions.h"
#include "item-sys.h"

const struct ItemData ItemEnfeebleStaff = {
	.nameTextId = MSG_ENFEEBLE,
	.descTextId = MSG_DESC_ENFEEBLE,
	.useDescTextId = MSG_DESC_ENFEEBLE,
	.number = ITEM_STAFF_ENFEEBLE,
	.weaponType = ITYPE_STAFF,
	.attributes = IA_STAFF,
	.maxUses = 5,
	.hit = 100,
	.weight = 2,
	.encodedRange = 0x17,
	.costPerUse = 20,
	.weaponRank = WPN_EXP_C,
	.iconId = 0x49, // TODO Update Icon
	.useEffectId = IER_STAFF_ENFEEBLE,
	.weaponExp = 2,
};