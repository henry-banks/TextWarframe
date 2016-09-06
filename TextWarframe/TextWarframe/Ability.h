///Base class for all abilities

#pragma once
#include "stdafx.h"

class Ability
{
public:
	Ability();
	~Ability();

	std::string name;

	//Damage can be negative if affect heals
	float baseDamage;

	//List of all damage types caused by the weapon
	std::vector<EDamageTypes> damageEffects;
	//"Shape" of ability (projectile, AOE, etc)
	EAbilityShapes abilityShape;

	//Cost, in energy, of ability.  Set to 0 if free.
	unsigned int abilityCost;
};

