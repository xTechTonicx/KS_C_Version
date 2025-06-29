#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"
#include "KSDefinitions.h"

const u16 gConstSkillTable_Job[0x100][2] = {
	[CLASS_AXE_ARMOR_M] { SID_WaryFighter },
	[CLASS_LANCE_ARMOR_M] { SID_WaryFighter },
	[CLASS_SWORD_ARMOR_M] { SID_WaryFighter },
};