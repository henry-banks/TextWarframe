///Enums related to combat (damage types, weapons types, etc).

#pragma once

//Which slot the weapon uses
enum class EWeaponSlotType
{
	PRIMARY,
	SIDEARM,
	MELEE,
	SENTINAL,
	ARCHWING_GUN,
	ARCHWING_MELEE,
	OTHER
};

enum class EWeaponType
{
	//Primary
	RIFLE,
	SHOTGUN,
	SNIPER,
	BOW,
	LAUNCHER,
	
	//Secondary
	PISTOL,
	BEAM,
	THROWN,

	//Melee
	SWORD,
	SWORD_DUAL,
	DAGGER,
	DAGGER_DUAL,
	SWORD_SHIELD,
	POLEARM,
	GLAIVE,
	HEAVY_BLADE,
	NIKANA,
	SCYTHE,
	GUNBLADE,
	RAPIER,
	MACHETE,
	FIST,
	SPARRING,
	STAFF,
	WHIP,
	WHIP_BLADE,
	HAMMER,
	CLAW,
	TONFA,
	NUNCHAKU,
	HYBRID,
	SPECIAL,

	OTHER
};

//More specific, "minor" damage types
enum class EDamageTypes
{
	//Physical
	IMPACT,
	PUNCTURE,
	SLASH,
	FINISHING,

	//Elemental
	COLD,
	ELECTRIC,
	HEAT,
	TOXIN,

	//Combined
	BLAST, //Heat+Cold
	CORROSIVE, //Electric+Toxin
	GAS, //Heat+Toxin
	MAGNETIC, //Cold+Electric
	RADIATION, //Heat+Electric
	VIRAL //Cold+Toxin
};

//Effects caused by various things
enum class EDamageEffects
{
	STAGGER, //Impact
	MIN_DAMAGE, //Puncture, "-Damage" (from wiki)
	BLEED, //Slash

	SLOWDOWN, //Cold
	CHAINSTUN, //Electric
	FIRE_DoT, //Heat
	PANIC, //Also Heat ;)
	HEALTH_DoT, //Toxin

	KNOCKDOWN, //Blast
	MIN_ARMOR, //Corrosive, "-Armor" (from wiki)
	TOXIN_AoE, //Gas
	MIN_SHIELD, //Magnetic "-Max Shield" (from wiki)
	MIN_ACCURACY, //Radiation "-Accuracy" (from wiki)
	FRIENDLYFIRE, //Radiation
	MIN_MAXHEALTH //Viral "-Max Health" (from wiki)
};

//Ability "shapes" (like RPG spell shapes)
enum class EAbilityShapes
{
	PROJECTILE, //A projectile
	TOUCH, //Caster must come into physical contact with target to cast
	AOE, //Applies affects within an area
	BEAM, //Shoots a beam that hits the first thing in a line
	MINE, //Places an object
	SELF, //Applies affects to caster
	TARGET_SINGLE, //Applies affects to a single target
	TARGET_MULT //Aplies affects to multiple targets
};

//List of states a unit can be in
enum class EUnitStates
{
	ALIVE,
	BELEEDING,
	DEAD
};