#include "stdafx.h"
#include "createapp.h"

using namespace std;

bool ExecuteApp(CreateApplication &Game) {
	static int level = LEVEL_ONE;
	static bool exitGame = false;
	static char userChoice;

	switch (level) {

	case (LEVEL_ONE):
	case (LEVEL_TWO):
		Game.DisplayMenu(level);
		userChoice = Game.GetUserInputChar();
		switch (userChoice) {
		case 'y':
			++level;
			break;
		case 'n':
			level = LEVEL_FOUR;
			break;
		}
		break;

	case (LEVEL_THREE):
		Game.PrintResults(EXTENSION);
		level = EXIT;
		break;

	case (LEVEL_FOUR):

		Game.DisplayMenu(level);
		userChoice = Game.GetUserInputChar();
		switch (userChoice) {
		case '1':
			Game.PrintResults(NO_DEAL);
			level = EXIT;
			break;
		case '2':
			Game.PrintResults(NO_BREXIT);
			level = EXIT;
			break;
		case '3':
			Game.PrintResults(ELECTIONS);
			level = EXIT;
			break;
		default:
			break;
		}
		break;

	case (EXIT):
		Game.DisplayMenu(EXIT);
		userChoice = Game.GetUserInputChar();
		switch (userChoice) {
		case 'y':
			exitGame = true;
			level = LEVEL_ONE;
			break;
		case 'n':
			level = LEVEL_ONE;
			break;
		default:
			break;
		}
		break;

	default:
		cout << "Unknown error.\n";
		exitGame = true;
		break;
	}
	return exitGame;
}

int main() {
	CreateApplication brexitGame;
	bool exit = false;

	while (exit != true) {
		exit = ExecuteApp(brexitGame);
	}

	return 0;
}