#include "GroupAI.h"
#include "common-chax.h"

void HandleGroupAi() {
    Debugf("Attacker leader is %d", UNIT_LEADER_CHARACTER(&gBattleActor.unit));
    Debugf("Target leader is %d", UNIT_LEADER_CHARACTER(&gBattleActor.unit));
}