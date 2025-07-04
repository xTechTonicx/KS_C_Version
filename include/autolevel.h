enum ChapterWeaponTier
{
    CHAPTER_WEAPON_TIER_NONE,
    CHAPTER_WEAPON_TIER_BRONZE,
    CHAPTER_WEAPON_TIER_IRON,
    CHAPTER_WEAPON_TIER_STEEL,
    CHAPTER_WEAPON_TIER_SILVER,
    CHAPTER_WEAPON_TIER_FORGED_SILVER,
    CHAPTER_WEAPON_TIER_MAX = CHAPTER_WEAPON_TIER_FORGED_SILVER,
};

enum TieredWeaponType
{
    WEAPON_TIER_NONE,

    TIER_WEAPON_SWORD,

    TIER_WEAPON_LANCE,
    TIER_WEAPON_LANCE_RANGED,

    TIER_WEAPON_AXE,
    TIER_WEAPON_AXE_RANGED,

    TIER_WEAPON_BOW,
    TIER_WEAPON_DAGGER,

    TIER_WEAPON_ANIMA_FIRE,
    TIER_WEAPON_ANIMA_WIND,
    TIER_WEAPON_ANIMA_THUNDER,

    TIER_WEAPON_DARK_STANDARD,
    TIER_WEAPON_LIGHT_STANDARD,

    TIER_WEAPON_STANDARD_MAX_1,
    TIER_WEAPON_STANDARD_MAX_2,
    TIER_WEAPON_STANDARD = TIER_WEAPON_STANDARD_MAX_2,
    TIER_WEAPON_EFFECTIVE_KILLER = TIER_WEAPON_STANDARD_MAX_2,
    
    TIER_WEAPON_MAX = TIER_WEAPON_STANDARD,
};

struct ItemTierData {
    u8 itemIndex;
    u8 forgeLevel;
};

void UnitHandleWeaponTiering(struct Unit *unit, const struct UnitDefinition *udef);
void UnitAutolevelWExpConfig(struct Unit* unit);