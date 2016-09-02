///Base class for all factions

#pragma once
#include "stdafx.h"

class Faction
{
public:
	Faction();
	~Faction();

	std::string name;

	//0 = Tenno, 1 = Grineer, 2 = Corpus, 3 = Infested, 4 = Corrupted, 5 = Wild
	unsigned int id; 
	
	/*TO ADD:
	Faction relations (map?)
	Actually I don't know if that's necessary since all the factions hate each other.
	*/
};

