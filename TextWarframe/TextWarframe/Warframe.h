///Base class for all Warframes

#pragma once
#include "stdafx.h"

class Warframe :
	public Unit
{
public:
	Warframe();
	~Warframe();

	//Four abilities maximum
	std::vector<Ability> abilities;
};

