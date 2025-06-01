#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemTierData gWeaponTierData[TIER_WEAPON_MAX][CHAPTER_WEAPON_TIER_MAX] = {
    [TIER_WEAPON_SWORD - 1] = {
        {ITEM_SWORD_BRONZE, 0},
        {ITEM_SWORD_IRON, 0},
        {ITEM_SWORD_STEEL, 0},
        {ITEM_SWORD_SILVER, 0},
        {ITEM_SWORD_SILVER, 1},
    },

    [TIER_WEAPON_LANCE - 1] = {
        {ITEM_LANCE_BRONZE, 0},
        {ITEM_LANCE_IRON, 0},
        {ITEM_LANCE_STEEL, 0},
        {ITEM_LANCE_SILVER, 0},
        {ITEM_LANCE_SILVER, 1},
    },

    [TIER_WEAPON_LANCE_RANGED - 1] = {
        {ITEM_LANCE_JAVELIN, 0},
        {ITEM_LANCE_JAVELIN, 0},
        {ITEM_LANCE_JAVELIN, 1},
        {ITEM_LANCE_SPEAR, 0},
        {ITEM_LANCE_SPEAR, 1}
    },

    [TIER_WEAPON_AXE - 1] = {
        {ITEM_AXE_BRONZE, 0},
        {ITEM_AXE_IRON, 0},
        {ITEM_AXE_STEEL, 0},
        {ITEM_AXE_SILVER, 0},
        {ITEM_AXE_SILVER, 1},
    },

    [TIER_WEAPON_AXE_RANGED - 1] = {
        {ITEM_AXE_HANDAXE, 0},
        {ITEM_AXE_HANDAXE, 0},
        {ITEM_AXE_HANDAXE, 1},
        {ITEM_AXE_TOMAHAWK, 0},
        {ITEM_AXE_TOMAHAWK, 1}
    },

    [TIER_WEAPON_BOW - 1] = {
        {ITEM_BOW_BRONZE, 0},
        {ITEM_BOW_IRON, 0},
        {ITEM_BOW_STEEL, 0},
        {ITEM_BOW_SILVER, 0},
        {ITEM_BOW_SILVER, 1},
    },

    // TODO: Tier [TIER_WEAPON_DAGGER - 1]
    // TODO: Tier [TIER_WEAPON_ANIMA_FIRE - 1]
    // TODO: Tier [TIER_WEAPON_ANIMA_WIND - 1]
    // TODO: Tier [TIER_WEAPON_ANIMA_THUNDER - 1]
    // TODO: Tier [TIER_WEAPON_DARK_STANDARD - 1]
    // TODO: Tier [TIER_WEAPON_LIGHT_STANDARD - 1]

    [TIER_WEAPON_STANDARD_MAX_1 - 1] = {
        {ITEM_NONE, 0},
        {ITEM_NONE, 0},
        {ITEM_NONE, 0},
        {ITEM_NONE, 1},
        {ITEM_NONE, 2},
    },

    [TIER_WEAPON_STANDARD_MAX_2 - 1] = {
        {ITEM_NONE, 0},
        {ITEM_NONE, 0},
        {ITEM_NONE, 0},
        {ITEM_NONE, 0},
        {ITEM_NONE, 1},
    }
};

#define ITEM_INDEX_NOT_NEEDED(type) gWeaponTierData[type - 1][0].itemIndex == ITEM_NONE
#define GET_WEAPON_TIER_DATA(type, tier) gWeaponTierData[type - 1][tier - 1]
#define CAN_UNIT_CLASS_USE_WEAPON(unit, weapon) unit->pClassData->baseRanks[GetItemData(item)->weaponType] != 0

int GetItemFromTier(int item, u8 tieredWeaponType, u8 tier) {
    if (ITEM_INDEX_NOT_NEEDED(tieredWeaponType))
        return ForgeWeapon(item, GET_WEAPON_TIER_DATA(tieredWeaponType, tier).forgeLevel);
    
    for (int i = tier; i < CHAPTER_WEAPON_TIER_MAX; i++) {
        if(ITEM_INDEX(item) == GET_WEAPON_TIER_DATA(tieredWeaponType, i).itemIndex)
            return item;
    }

    int newItem = MakeNewItem(GET_WEAPON_TIER_DATA(tieredWeaponType, tier).itemIndex);
    return ForgeWeapon(newItem, GET_WEAPON_TIER_DATA(tieredWeaponType, tier).forgeLevel);
}

void UnitHandleWeaponTieringHelper(struct Unit *unit, u8 tier) {
	for (int i = 0; i < GetUnitItemCount(unit); i++) {
		int item = unit->items[i];

        if (item == ITEM_NONE)
            break;
        
		u8 tieredWeaponType = GetItemData(ITEM_INDEX(item))->tieredWeaponType;
        // Debugf("Tiered weapon type is %u", tieredWeaponType);

        if (!(GetItemAttributes(item) & IA_WEAPON) || tieredWeaponType == WEAPON_TIER_NONE || !CAN_UNIT_CLASS_USE_WEAPON(unit, item))
            continue;
        
        // Debug("Changing weapon out");
        item = GetItemFromTier(item, tieredWeaponType, tier);

        unit->items[i] = item;
	}

    UnitAutolevelWExpConfig(unit);
}



void UnitHandleWeaponTiering(struct Unit *unit) {
	if (UNIT_FACTION(unit) != FACTION_RED || unit->state & US_DROP_ITEM)
		return;
    
    SWITCH_BY_DIFFICULTY(
		Debug("Is normal mode");,
        Debug("Is hard mode");,
        Debug("Is lunatic mode");
	);
    
	SWITCH_BY_DIFFICULTY(
		return;,
		UnitHandleWeaponTieringHelper(unit, GetROMChapterStruct(gPlaySt.chapterIndex)->minWeaponTierHard); return;,
		UnitHandleWeaponTieringHelper(unit, GetROMChapterStruct(gPlaySt.chapterIndex)->minWeaponTierLunatic); return;
	);
}