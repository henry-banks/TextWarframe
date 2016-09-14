#pragma once
#include <iostream>
#include <cstdlib>
#include "stdafx.h"
#include "PlayerData.h"

class GameState
{
	PlayerData* player;

public:
	GameState();
	~GameState();

	//Multipurpose option list generator
	int optionList(std::vector<std::string> choices);

	//Menus
	int MainMenu();

	//Orbiter module access
	void Arsenal();
	void Mods();
	void Foundry();
	void Navigation();
	void Codex();
	void Market();

	
};

