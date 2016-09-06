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
}


Weapon::~Weapon()
{
}
