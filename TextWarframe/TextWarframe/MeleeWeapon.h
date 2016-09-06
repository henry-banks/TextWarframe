///Base class for all melee weapons

#pragma once
#include "stdafx.h"
class MeleeWeapon :
	public Weapon
{
public:
	MeleeWeapon();
	~MeleeWeapon();

	//Range of the weapon
	float range;

	bool isChanneled;
};

