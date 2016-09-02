///Base class for all units

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

	Faction faction;

	/*TO ADD:
	Weapons
	Skills/Powers
	Location(?)
	Dead/Alive/Bleeding out
	Status Effects*/
};

