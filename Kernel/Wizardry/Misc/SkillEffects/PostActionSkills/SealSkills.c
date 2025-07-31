#include "common-chax.h"
#include "debuff.h"
#include "status-getter.h"
#include "action-expa.h"
#include "unit-expa.h"
#include "skill-system.h"
#include "battle-system.h"
#include "combat-art.h"
#include "constants/skills.h"
#include "constants/combat-arts.h"
#include "KSDefinitions.h"

void  HandleSealSkill(int skillId, enum UnitStatusIdxRef stat, struct Unit *attacker, struct Unit *target, bool attackerHasIE, bool targetHasIE)
{
    if (SkillTester(attacker, skillId))
        InflictGradualStatDebuff(target, stat, SKILL_EFF0(skillId), attackerHasIE);
    if (SkillTester(target, skillId))
        InflictGradualStatDebuff(attacker, stat, SKILL_EFF0(skillId), targetHasIE);
}

void PostActionSealSkills(ProcPtr parent)
{
    struct Unit * attacker = GetUnit(gActionData.subjectIndex);
    struct Unit * target = GetUnit(gActionData.targetIndex);
    bool attackerHasIE = false;
    bool targetHasIE = false;

#if defined(SID_InevitableEnd) && (COMMON_SKILL_VALID(SID_InevitableEnd))
    if (SkillTester(attacker, SID_InevitableEnd))
        attackerHasIE = true;
    if (SkillTester(target, SID_InevitableEnd))
        targetHasIE = true;
#endif
    switch (gActionData.unitActionType)
    {
        case UNIT_ACTION_COMBAT:
#if defined(SID_SealStrength) && (COMMON_SKILL_VALID(SID_SealStrength))
            HandleSealSkill(SID_SealStrength, UNIT_STATUS_POW, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealMagic) && (COMMON_SKILL_VALID(SID_SealMagic))
            HandleSealSkill(SID_SealMagic, UNIT_STATUS_MAG, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealSkill) && (COMMON_SKILL_VALID(SID_SealSkill))
            HandleSealSkill(SID_SealSkill, UNIT_STATUS_SKL, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealSpeed) && (COMMON_SKILL_VALID(SID_SealSpeed))
            HandleSealSkill(SID_SealSpeed, UNIT_STATUS_SPD, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealLuck) && (COMMON_SKILL_VALID(SID_SealLuck))
            HandleSealSkill(SID_SealLuck, UNIT_STATUS_LCK, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealDefense) && (COMMON_SKILL_VALID(SID_SealDefense))
            HandleSealSkill(SID_SealDefense, UNIT_STATUS_DEF, attacker, target, attackerHasIE, targetHasIE);
#endif

#if defined(SID_SealResistance) && (COMMON_SKILL_VALID(SID_SealResistance))
            HandleSealSkill(SID_SealResistance, UNIT_STATUS_RES, attacker, target, attackerHasIE, targetHasIE);
#endif
            break;
    }
}
