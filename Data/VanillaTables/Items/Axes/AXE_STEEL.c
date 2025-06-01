#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSteelAxe = {
    .nameTextId = MSG_AXE_STEEL,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_AXE_STEEL,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 16,
    .hit = 75,
    .weight = 11,
    .encodedRange = 0x11,
    .costPerUse = 2000,
    .weaponRank = WPN_EXP_C,
    .iconId = ICON_AXE_STEEL,
    .weaponExp = 1,
    .tieredWeaponType = TIER_WEAPON_AXE
};