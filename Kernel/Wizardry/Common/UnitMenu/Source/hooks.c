#include "common-chax.h"
#include "combat-art.h"
#include "skill-system.h"
#include "battle-system.h"

u8 UnitActionMenu_OnHelpBoxRe(struct MenuProc *menu, struct MenuItemProc *item)
{
	return MenuSkills_OnHelpBox(menu, item);
}

u8 UnitActionMenu_CancelRe(struct MenuProc *menu, struct MenuItemProc *item)
{
	ResetCombatArtStatus();
	ResetSkillLists();
	ResetCombatArtList();
	ResetWtaStatus();

	return MenuCancelSelect(menu, item);
}
