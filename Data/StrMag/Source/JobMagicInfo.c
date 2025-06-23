#include "common-chax.h"
#include "strmag.h"
#include "KSDefinitions.h"

const struct UnitMagicInfo gMagicJInfos[0x100] = {
	[CLASS_PRINCESS_F] = {
		.base = 4,
		.growth = 0,
		.cap = 17,
		.bonus = 0,
	},
	[CLASS_AXE_ARMOR_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0
	},
	[CLASS_LANCE_ARMOR_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0
	},
	[CLASS_SWORD_ARMOR_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0
	},
	[CLASS_FIGHTER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_BRIGAND_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_BRIGAND_CH1_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_ARCHER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_ARCHER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_OUTLAW_F] = {
		.base = 3,
		.growth = 25,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_OUTLAW_M] = {
		.base = 3,
		.growth = 25,
		.cap = 16,
		.bonus = 0
	},
	[CLASS_NINJA_F] = {
		.base = 1,
		.growth = 20,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_NINJA_M] = {
		.base = 1,
		.growth = 20,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_PRIEST_M] = {
		.base = 4,
		.growth = 35,
		.cap = 17,
		.bonus = 0,
	},
	[CLASS_CLERIC_F] = {
		.base = 4,
		.growth = 35,
		.cap = 17,
		.bonus = 0,
	},
	[CLASS_SOLDIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_SOLDIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_MILITIA_F] = {
		.base = 0,
		.growth = 0,
		.cap = 10,
		.bonus = 0,
	},
	[CLASS_MILITIA_M] = {
		.base = 0,
		.growth = 0,
		.cap = 10,
		.bonus = 0,
	},
	[CLASS_SWORDFIGHTER_F] = {
		.base = 0,
		.growth = 15,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_SWORDFIGHTER_M] = {
		.base = 0,
		.growth = 15,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_SWORD_PEGASUS_F] = {
		.base = 2,
		.growth = 25,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_LANCE_PEGASUS_F] = {
		.base = 2,
		.growth = 25,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_LANCE_PEGASUS_M] = {
		.base = 2,
		.growth = 25,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_SWORD_CAVALIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_SWORD_CAVALIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_LANCE_CAVALIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_LANCE_CAVALIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_AXE_CAVALIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_AXE_CAVALIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 12,
		.bonus = 0,
	},
	[CLASS_TROUBADOUR_F] = {
		.base = 4,
		.growth = 30,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_NOMAD_F] = {
		.base = 2,
		.growth = 20,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_NOMAD_M] = {
		.base = 2,
		.growth = 20,
		.cap = 16,
		.bonus = 0,
	},
	[CLASS_MAGE_F] = {
		.base = 5,
		.growth = 40,
		.cap = 19,
		.bonus = 0,
	},
	[CLASS_MAGE_M] = {
		.base = 5,
		.growth = 40,
		.cap = 19,
		.bonus = 0,
	},
	[CLASS_UMBRAL_BISHOP_F] = {
		.base = 11,
		.growth = 45,
		.cap = 29,
		.bonus = 0,
	},
	[CLASS_UMBRAL_BISHOP_M] = {
		.base = 11,
		.growth = 45,
		.cap = 29,
		.bonus = 0,
	},
	[CLASS_CANTOR_M] = {
		.base = 13,
		.growth = 45,
		.cap = 30,
		.bonus = 0,
	},
	[CLASS_BALLISTICIAN_M] = {
		.base = 0,
		.growth = 0,
		.cap = 10,
		.bonus = 0,
	},
};
