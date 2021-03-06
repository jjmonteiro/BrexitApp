
#ifndef APPLICATION_BASE_FILE_H
#define APPLICATION_BASE_FILE_H


enum LEVELS { LEVEL_ZERO, LEVEL_ONE, LEVEL_TWO, LEVEL_THREE, LEVEL_FOUR, EXIT };
enum RESULTS { RESULT_ZERO, EXTENSION, NO_DEAL, NO_BREXIT, ELECTIONS };


struct CreateApplication
{
private:
	void DisplayTitle();
	void ClearScreen();
	void DisplayMenu_1();
	void DisplayMenu_2();
	void DisplayMenu_4();
	void DisplayMenuExit();
	void PrintResultsTitle();
	void PrintResult_1();
	void PrintResult_2();
	void PrintResult_3();
	void PrintResult_4();
public:
	char GetUserInputChar();
	void DisplayMenu(int menuSelection);
	void PrintResults(int menuSelection);
};

#endif