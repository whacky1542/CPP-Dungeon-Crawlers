#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int gameStart();
int controlScreen();
int startIntro();

int main()
{
	int mainMenuInput = 0;
	int controlScreenInput = 0;
	bool invalid = true;
	int startIntroInput = 0;

	while (invalid == true)
	{
		mainMenuInput = gameStart();
		if (mainMenuInput == 1)
		{
			cout << "game started" << endl;

			startIntroInput = startIntro();
			
			if (startIntroInput == 1)
			{
				cout << "You gave the word" << endl;
				invalid = false;
			}
			else if (startIntroInput == 2)
			{
				cout << "You went to the Blacksmith" << endl;
				invalid = false;
			}
			else if (startIntroInput == 3)
			{
				cout << "You went to the Alchemist" << endl;
				invalid = false;
			}
			else if (startIntroInput == 4)
			{
				cout << "You check your inventory" << endl;
				invalid = false;
			}
			else if (startIntroInput == 5)
			{
				invalid = true;
			}

			//invalid = true;
		}
		else if (mainMenuInput == 2)
		{
			invalid = false;
		}
		else if (mainMenuInput == 3)
		{
			controlScreenInput = controlScreen();
			invalid = true;
		}
		else if (mainMenuInput == 4)
		{
			cout << "unfinished" << endl;
			invalid = true;
		}
	}

	system("pause");
	return 0;
}

int gameStart()
{
	int input = 0;
	cout << "            Dungeon Crawlers" << endl << "           by Brendan and Alex" << endl << "-------------------------------------------" << endl;
	cout << "1 - Start" << endl << "2 - Exit program" << endl << "3 - Controls" << endl << "4 - Load Game" << endl << ">";
	cin >> input;

	return input;
}

int controlScreen()
{
	int input = 0;
	cout << "Controls: " << endl << "\">\" = Enter Input" << endl << "1, 2, 3, etc. = numbers you enter to select choices" << endl;
	cout << "----------------------------" << endl << "1 - Back" << endl << ">";
	cin >> input;

	return input;
}

int startIntro()
{
	int input = 0;
	cout << "Ralf -" << endl;
	cout << "Hello adventurer! Welcome to the city of Pochinki!" << endl
		<< "My name is Ralf and I’ll be your guide to DUNGEON" << endl
		<< "CRAWLERS. Your goal is to gain fame and fortune by" << endl
		<< "delving the perilous dungeons just on the edge of" << endl
		<< "town. It won’t be easy to do by your lonesome, so" << endl
		<< "go over to the Blacksmith for weapons and armor," << endl
		<< "and if you need potions, just visit the Alchemist" << endl
		<< "over there. When you are ready to delve your first" << endl
		<< "dungeon, just give the word." << endl
		<< "------------------------------------------------------" << endl
		<< "1 - Give the word" << endl
		<< "2 - Go to the Blacksmith" << endl
		<< "3 - Go to the Alchemist" << endl
		<< "4 - Check Inventory" << endl
		<< "5 - Quit" << endl
		<< ">";
	cin >> input;

	return input;
}