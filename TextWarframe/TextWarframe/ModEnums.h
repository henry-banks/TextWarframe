///Enums related to mods

#pragma once

enum class EModRarity
{
	BRONZE,
	SILVER,
	GOLD,
	LEGEND
};

enum class EModPolarity
{
	MADURAI, //V thing, Damage/Powers
	VAZARIN, //Traingle/D thing, Defensive/Health?Armor
	NARAMON, //Line, Misc
	ZENURIK, //Claw/Scratch, Warframe augments + channeling
	PENJAGA, //Line + dot/Y thing, Sentinel/Kubrow abilities
	KONESKI, //O thing, Fusion Core (outdated)
	UNAIRU //Wingey, 'r' thingey, Melee Stance mods
};

//The type of object the mod is attached to
enum class EModType
{
	WARFRAME,
	WARFRAME_SPECIFIC, //Warframe must be specified
	RIFLE,
	SHOTGUN,
	PISTOL,
	MELEE,
	SENTINAL,
	KUBROW,
	AURA,
	STANCE,
	ARCHWING,
	ARCHWING_GUN,
	ARCHWING_MELEE
};

//"Special" mod types (corrupted, exilus, etc)
enum class EModSpecialType
{
	NORMAL, //Default, 'normal' mods
	AURA,
	STANCE,
	EXILUS,
	NIGHTMARE,
	CORRUPTED,
	AUGMENT,
	CONCLAVE,
	DAMAGED,
	PRIMED
};