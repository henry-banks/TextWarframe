#include "Mod.h"



Mod::Mod()
{
	name = "MOD_NAME";
	description = "An unspecified mod.";
	
	rarity = EModRarity::BRONZE;
	polarity = EModPolarity::MADURAI;
	type = EModType::WARFRAME;
	specialType = EModSpecialType::NORMAL;

	rank = 0;
	drain = 0;
	conclaveScore = 0;
	rating = 0;
}


Mod::~Mod()
{
}
