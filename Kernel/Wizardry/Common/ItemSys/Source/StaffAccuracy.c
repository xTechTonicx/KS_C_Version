#include "common-chax.h"
#include "skill-system.h"
#include "status-getter.h"
#include "strmag.h"
#include "constants/skills.h"

LYN_REPLACE_CHECK(GetOffensiveStaffAccuracy);
int GetOffensiveStaffAccuracy(struct Unit *actor, struct Unit *target)
{
	return MagGetter(actor) >= ResGetter(target) ? 100 : 0;
}
