#include "common-chax.h"
#include "kernel-lib.h"
#include "KSDefinitions.h"

LYN_REPLACE_CHECK(GetItemMight);
int GetItemMight(int item) {
    int value = GetItemData(ITEM_INDEX(item))->might;

    if (!(GetItemAttributes(ITEM_INDEX(item)) & IA_WEAPON))
        return value;
    
    int uses = ITEM_USES(item);
    if (uses == 1)
        return value + 4;
    else if (uses == 2)
        return value + 8;
    return value;
}

void ForgeEnemyWeapons(u8 weapon, u8 forgeLevel) {
    FOR_UNITS_ONMAP_FACTION(FACTION_RED, unit,
    {
        for(int i = 0; i < UNIT_ITEM_COUNT; i++) {
            int iid = unit->items[i];

            if (iid == ITEM_NONE)
                break;
            
            if (iid == weapon) 
                unit->items[i] = unit->items[i] + (forgeLevel << 8);
        };
    })
}

void ForgeEnemyWeapons_ASMC() {
    ForgeEnemyWeapons(gEventSlots[1], gEventSlots[2]);
}