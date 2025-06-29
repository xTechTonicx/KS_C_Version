#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemLancereaver = {
	.nameTextId = MSG_LANCE_IRON,
	.descTextId = MSG_DESC_STANDARD,
	.number = ITEM_LANCE_LANCEREAVER,
	.weaponType = ITYPE_LANCE,
	.attributes = IA_WEAPON | IA_UNBREAKABLE | IA_REVERTTRIANGLE,
	.maxUses = 1,
	.might = 11,
	.hit = 90,
	.weight = 11,
	.encodedRange = 0x11,
	.costPerUse = 1000,
	.weaponRank = WPN_EXP_C,
	.iconId = ICON_LANCE_IRON,
	.weaponExp = 1,
	.tieredWeaponType = TIER_WEAPON_LANCE,
};