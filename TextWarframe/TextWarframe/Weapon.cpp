#include "Weapon.h"



Weapon::Weapon()
{
	name = "WEAPON_NAME";
	owner = nullptr;
	weaponSlot = EWeaponSlotType::PRIMARY;
	weaponType = EWeaponType::OTHER;

	baseDamage = 0;
	totalDamage = 0;
	level = 0;
	modCapacity = 0;
}


Weapon::~Weapon()
{
}

std::string Weapon::getName()
{
	return name;
}

void Weapon::setName(std::string inName)
{
	name = inName;
}
