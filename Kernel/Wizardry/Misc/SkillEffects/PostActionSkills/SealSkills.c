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

void PostActionSealSkills(ProcPtr parent)
{
    FORCE_DECLARE struct Unit * unit = gActiveUnit;
    bool attackerHasIE = false;
    bool targetHasIE = false;

#if defined(SID_InevitableEnd) && (COMMON_SKILL_VALID(SID_InevitableEnd))
    if (SkillTester(GetUnit(gActionData.subjectIndex), SID_InevitableEnd))
        attackerHasIE = true;
    if (SkillTester(GetUnit(gActionData.targetIndex), SID_InevitableEnd))
        targetHasIE = true;
#endif
        switch (gActionData.unitActionType)
        {
        case UNIT_ACTION_COMBAT:
#if defined(SID_SealDefense) && (COMMON_SKILL_VALID(SID_SealDefense))
            if (SkillTester(unit, SID_SealDefense) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), DEF_DEBUFF_START, SKILL_EFF0(SID_SealDefense), attackerHasIE);
            if (SkillTester(unit, SID_SealDefense) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), DEF_DEBUFF_START, SKILL_EFF0(SID_SealDefense), targetHasIE);
#endif

#if defined(SID_SealLuck) && (COMMON_SKILL_VALID(SID_SealLuck))
            if (SkillTester(unit, SID_SealLuck) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), LCK_DEBUFF_START, SKILL_EFF0(SID_SealLuck), attackerHasIE);
            if (SkillTester(unit, SID_SealLuck) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), LCK_DEBUFF_START, SKILL_EFF0(SID_SealLuck), targetHasIE);
#endif

#if defined(SID_SealMagic) && (COMMON_SKILL_VALID(SID_SealMagic))
            if (SkillTester(unit, SID_SealMagic) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), MAG_DEBUFF_START, SKILL_EFF0(SID_SealMagic), attackerHasIE);
            if (SkillTester(unit, SID_SealMagic) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), MAG_DEBUFF_START, SKILL_EFF0(SID_SealMagic), targetHasIE);
#endif

#if defined(SID_SealResistance) && (COMMON_SKILL_VALID(SID_SealResistance))
            if (SkillTester(unit, SID_SealResistance) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), RES_DEBUFF_START, SKILL_EFF0(SID_SealResistance), attackerHasIE);
            if (SkillTester(unit, SID_SealResistance) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), RES_DEBUFF_START, SKILL_EFF0(SID_SealResistance), targetHasIE);
#endif

#if defined(SID_SealSkill) && (COMMON_SKILL_VALID(SID_SealSkill))
            if (SkillTester(unit, SID_SealSkill) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), SKL_DEBUFF_START, SKILL_EFF0(SID_SealSkill), attackerHasIE);
            if (SkillTester(unit, SID_SealSkill) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), SKL_DEBUFF_START, SKILL_EFF0(SID_SealSkill), targetHasIE);
#endif

#if defined(SID_SealSpeed) && (COMMON_SKILL_VALID(SID_SealSpeed))
            if (SkillTester(unit, SID_SealSpeed) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), SPD_DEBUFF_START, SKILL_EFF0(SID_SealSpeed), attackerHasIE);
            if (SkillTester(unit, SID_SealSpeed) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), SPD_DEBUFF_START, SKILL_EFF0(SID_SealSpeed), targetHasIE);
#endif

#if defined(SID_SealStrength) && (COMMON_SKILL_VALID(SID_SealStrength))
            if (SkillTester(unit, SID_SealStrength) && unit == GetUnit(gActionData.subjectIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.targetIndex), STR_DEBUFF_START, SKILL_EFF0(SID_SealStrength), attackerHasIE);
            if (SkillTester(unit, SID_SealStrength) && unit == GetUnit(gActionData.targetIndex))
                InflictGradualStatDebuff(GetUnit(gActionData.subjectIndex), STR_DEBUFF_START, SKILL_EFF0(SID_SealStrength), targetHasIE);
#endif

            break;
        }
}
