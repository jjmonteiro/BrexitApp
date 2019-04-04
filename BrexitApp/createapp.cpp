#include "stdafx.h"
#include "createapp.h"

using namespace std;

static const char  *TITLE_0 = "+++ BREXIT NEXT STEPS +++\n\n";
static const char  *TITLE_1 = "29 Mar: MPs reject withdrawal agreement. Brexit date stays as 12 Apr.\n\n";

static const char  *QUESTION_1 = "1 Apr: Second indicative votes. Clear result? (y/n)\n";
static const char  *QUESTION_2 = "Will Theresa May accept plan? (y/n)\n";
static const char  *QUESTION_3 = "Possible options:\n1. No-deal Brexit.\n2. Cancel Brexit.\n3. Further extension.\n";
static const char  *QUESTION_4 = "\nEXIT? (y/n)";

static const char  *RESULT_0 = "\n\nPossible results:\n";
static const char  *RESULT_1 = ">Government tries to implement decision: Possible further extension.\n";
static const char  *RESULT_2 = ">The UK leaves the EU without a Deal.";
static const char  *RESULT_3 = ">The UK cancels brexit and remains in the EU.";


void CreateApplication::DisplayTitle() {
	ClearScreen();
	cout << TITLE_0 << TITLE_1;
}

void CreateApplication::ClearScreen() {
	system("CLS");
}

void CreateApplication::DisplayMenu_1() {
	cout << QUESTION_1;
}

void CreateApplication::DisplayMenu_2() {
	cout << QUESTION_2;
}

void CreateApplication::DisplayMenu_4() {
	cout << QUESTION_3;
}

void CreateApplication::DisplayMenuExit() {
	cout << QUESTION_4;
}

void CreateApplication::PrintResultsTitle() {
	cout << RESULT_0;
}

void CreateApplication::PrintResult_1() {
	PrintResultsTitle();
	cout << RESULT_1;
}

void CreateApplication::PrintResult_2() {
	PrintResultsTitle();
	cout << RESULT_2;
}

void CreateApplication::PrintResult_3() {
	PrintResultsTitle();
	cout << RESULT_3;
}

void CreateApplication::PrintResult_4() {
	PrintResultsTitle();
	cout << ">UK takes part in EU elections. Next possible scenarios:\n";
	cout << " -Further vote on May's deal.\n";
	cout << " -Renegotiate deal.\n";
	cout << " -New referendum.\n";
	cout << " -General elections.\n";
	cout << " -Cancel Brexit.\n";
}


char CreateApplication::GetUserInputChar() {
	char result;
	cout << "\n>";
	result = getchar();
	while (getchar() != '\n');
	return result;
}

void CreateApplication::DisplayMenu(int menuSelection) {

	switch (menuSelection)
	{
	case LEVEL_ONE:
		DisplayTitle();
		DisplayMenu_1();
		break;
	case LEVEL_TWO:
		DisplayTitle();
		DisplayMenu_2();
		break;
	case LEVEL_FOUR:
		DisplayTitle();
		DisplayMenu_4();
		break;
	case EXIT:
		DisplayMenuExit();
		break;

	}

}

void CreateApplication::PrintResults(int menuSelection) {

	switch (menuSelection)
	{
	case EXTENSION:
		PrintResult_1();
		break;
	case NO_DEAL:
		PrintResult_2();
		break;
	case NO_BREXIT:
		PrintResult_3();
		break;
	case ELECTIONS:
		PrintResult_4();
		break;
	}
}

