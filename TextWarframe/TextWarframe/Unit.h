///Base class for all units.  Pure Virtual.

#pragma once
#include "stdafx.h"

class Unit
{
public:
	Unit();
	~Unit();

	std::string name;
	
	unsigned int health;
	unsigned int shields;
	unsigned int level;

	EFaction faction;
	EUnitStates state;

	//List of all status effects
	std::vector<EDamageEffects> statusEffects;
	std::vector<Weapon> weapons;
	std::vector<Ability> abilities;

	/*TO ADD:
	Location(?)*/
};

