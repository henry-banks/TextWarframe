#include "GameState.h"

using namespace std;

GameState::GameState()
{
}


GameState::~GameState()
{
}

int GameState::optionList(std::vector<std::string> choices)
{
	int a = -1;

	for (int i = 0; i < choices.size(); i++)
	{
		cout << "\n" << i << ". " << choices[i];
	}

	printf("\n\nInput choice(0 - %d): ", choices.size());
	scanf_s("%d", &a);

	while (a < 0 && a > choices.size()) {
		printf("\n\nInvalid choice.  Try again: ");
		scanf_s("%d", &a);
	}

	return a;
}


int GameState::MainMenu()
{
	int choice = -1;

	printf("\n\nMAIN MENU\n");
	printf("==========\n");
	printf("0. Quit\n\n");
	printf("1. Navigation\n");
	printf("2. Arsenal\n");
	printf("3. Mods\n");
	printf("4. Foundry\n");
	printf("5. Codex\n");
	printf("6. View all eqipment\n");

	printf("\nEnter choice (0-6) and press Enter: ");
	scanf_s("%d", &choice);

	return choice;
}

void GameState::Arsenal()
{
	int choice = -1;
	printf("\nARSENAL");
	printf("\n=======");
	printf("\nCurrent Warframe: "); cout << player->currentFrame->name;
	printf("\nCurrent Primary: "); cout << player->primaryWeapon->getName();
	printf("\nCurrent Secondary: "); cout << player->secondaryWeapon->getName();
	printf("\nCurrent Melee: "); cout << player->meleeWeapon->getName();

	//optionList(["Back to Menu", ""])

	printf("\n\n0. Back to Main Menu");
	printf("\n1. Equip Warframe");
	printf("\n2. Equip Primary");
	printf("\n3. Equip Secondary");
	printf("\n4. Equip Melee");

	printf("\n\nEnter choice (0-6) and press Enter: ");
	scanf_s("%d", &choice);
}

void GameState::Mods()
{
}

void GameState::Foundry()
{
}

void GameState::Navigation()
{
}

void GameState::Codex()
{
}

void GameState::Market()
{
}

