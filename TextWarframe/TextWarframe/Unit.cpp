#include "Unit.h"
using namespace std;

Unit::Unit()
{
	name = "DEFAULT_NAME";

	//100 is a pretty good base health
	health = 100;
	shields = 100;
	level = 0;

	//Default all units to friendly
	faction = EFaction::TENNO;
}


Unit::~Unit()
{
}
