#pragma once
#include "stdafx.h"
class PlayerData
{
public:
	PlayerData();
	~PlayerData();

	std::string username;

	unsigned int masteryRank;
	unsigned int masteryPoints;

	//Currently equipped warframe
	Warframe* currentFrame;
	//All warframes in inventory
	std::vector<Warframe*> frameList;

	Weapon* primaryWeapon;
	Weapon* secondaryWeapon;
	Weapon* meleeWeapon;
	std::vector<Weapon*> weaponList;

};

