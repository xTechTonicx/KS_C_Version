#pragma once

#ifndef KS_DEF
#define KS_DEF

#include "../Sprites/Sprites.h"
#include "../Data/VanillaTables/VanillaTables.h"
#include "../Contents/Texts/build/msgs.h"
#include "attunement.h"
#include "autolevel.h"
#include "GroupAi.h"
#include "GradualStatDebuff.h"

enum CharacterDefinitions {
	// Player characters
	CHARACTER_NONE,
	CHARACTER_AUDREY,
	CHARACTER_WESLEY,
	CHARACTER_OSBORNE,
	CHARACTER_ELAINE,
	CHARACTER_CORDELL,
	CHARACTER_SURGE,
	CHARACTER_OSMA,
	CHARACTER_CAMERON,
	CHARACTER_MONA,
	CHARACTER_JYRI,
	CHARACTER_LIEV,
	// Enemy characters
	CHARACTER_GLOVE = 0x40,
	CHARACTER_FESTER,
	CHARACTER_YULIE,
	CHARACTER_DARRON,
	CHARACTER_BECKHAM,
	// Generics
	CHARACTER_SLAVER_0 = 0x80,
	CHARACTER_SLAVER_1,
	CHARACTER_SLAVER_2,
	CHARACTER_SLAVER_3,
	CHARACTER_SLAVER_4,
	CHARACTER_SLAVER_5,
	CHARACTER_SLAVER_6,
	CHARACTER_SLAVER_7,
	CHARACTER_SLAVER_8,
};

#define IS_KS_HARD_MODE gPlaySt.config.controller == 1
#define IS_KS_LUNATIC_MODE gPlaySt.chapterStateBits &PLAY_FLAG_HARD

#define SWITCH_BY_DIFFICULTY(normalFunc, hardFunc, lunaticFunc) \
	{                                                       \
		if (IS_KS_LUNATIC_MODE) {                       \
			lunaticFunc                             \
		} else if (IS_KS_HARD_MODE) {                   \
			hardFunc                                \
		} else {                                        \
			normalFunc                              \
		}                                               \
	}

int ForgeWeapon(int weapon, u8 forgeLevel);

#endif