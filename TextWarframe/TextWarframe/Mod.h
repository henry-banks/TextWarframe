///Base class for all mods

#pragma once
#include "stdafx.h"
#include "ModEnums.h"
class Mod
{
public:
	Mod();
	~Mod();

	std::string name;
	std::string description;

	EModPolarity polarity;
	EModRarity rarity;
	EModType type;
	EModSpecialType specialType;

	unsigned int rank;
	unsigned int drain;
	unsigned int conclaveScore;
	unsigned int rating;
};

