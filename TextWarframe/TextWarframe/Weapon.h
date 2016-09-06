///Base class for all weapons.  Pure virtual.

#pragma once
#include "stdafx.h"

class Weapon
{
public:
	Weapon();
	~Weapon();

protected:
	std::string name;

	Unit* owner;
	EWeaponSlotType weaponSlot;
	EWeaponType weaponType;
	//List of all damage types caused by the weapon
	std::vector<EDamageTypes> damageEffects;

	float baseDamage;
	//All damage after any modifiers are added
	float totalDamage;

	unsigned int level;
};

