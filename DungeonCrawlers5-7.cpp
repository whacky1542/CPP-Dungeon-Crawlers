#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int gameStart();
int controlScreen();
int controlScreenFirst();
int startIntroFirst();
int importantFunction();
int levelOne();

int main()
{
	controlScreenFirst();
	importantFunction();

	system("pause");
	return 0;
}

int importantFunction()
{
	int mainMenuInput = 0;
	int controlScreenInput = 0;
	bool invalid = true;
	int startIntroFirstInput = 0;
	int levelOneInput = 0;

	while (invalid == true)
	{
		mainMenuInput = gameStart();
		if (mainMenuInput == 1)
		{
			cout << "game started" << endl;

			startIntroFirstInput = startIntroFirst();

			if (startIntroFirstInput == 1)
			{
				cout << "You gave the word" << endl;
				if (cin.get() == '\n')
				    levelOneInput = levelOne();
				else
				    cout << "No";
				
				
				
				invalid = false;
			}
			else if (startIntroFirstInput == 2)
			{
				cout << "You went to the Blacksmith" << endl;
				invalid = false;
			}
			else if (startIntroFirstInput == 3)
			{
				cout << "You went to the Alchemist" << endl;
				invalid = false;
			}
			else if (startIntroFirstInput == 4)
			{
				cout << "You check your inventory" << endl;
				invalid = false;
			}
			else if (startIntroFirstInput == 5)
			{
				invalid = true;
			}

			return 0;
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
}

int gameStart()
{
	int input = 0;
	cout << endl << endl;
	cout << "            Dungeon Crawlers" << endl << "           by Brendan and Alex" << endl << "-------------------------------------------" << endl;
	cout << " 1 - Start" << endl << " 2 - Exit program" << endl << " 3 - Controls" << endl << " 4 - Load Game" << endl << ">";
	
	cin >> input;

	return input;
}

int controlScreenFirst()
{
	int input = 0;
	cout << endl << endl;
	cout << "Controls: " << endl << "\">\" = Enter Input" << endl << "1, 2, 3, etc. = numbers you enter to select choices" << endl;
	cout << "----------------------------" << endl << " 1 - Continue" << endl << ">";
	
	while (input != 1)
	{
		cin >> input;
		if (input != 1)
		{
			cout << "Invalid Input" << endl << ">";
		}
	}

	return input;
}

int controlScreen()
{
	int input = 0;
	cout << endl << endl;
	cout << "Controls: " << endl << "\">\" = Enter Input" << endl << "1, 2, 3, etc. = numbers you enter to select choices" << endl;
	cout << "----------------------------" << endl << " 1 - Back" << endl << ">";

	while (input != 1)
	{
		cin >> input;
		if (input != 1)
		{
			cout << "Invalid Input" << endl << ">";
		}
	}

	return input;
}

int startIntroFirst()
{
	int input = 0;
	cout << endl << endl;
	cout << " Ralf -" << endl;
	cout << " Hello adventurer! Welcome to the city of Pochinki!" << endl
		<< " My name is Ralf and I\'ll be your guide to DUNGEON" << endl
		<< " CRAWLERS. Your goal is to gain fame and fortune by" << endl
		<< " delving the perilous dungeons just on the edge of" << endl
		<< " town. It won\'t be easy to do by your lonesome, so" << endl
		<< " go over to the Blacksmith for weapons and armor," << endl
		<< " and if you need potions, just visit the Alchemist" << endl
		<< " over there. When you are ready to delve your first" << endl
		<< " dungeon, just give the word." << endl
		<< "------------------------------------------------------" << endl
		<< " 1 - Give the word" << endl
		<< " 2 - Go to the Blacksmith" << endl
		<< " 3 - Go to the Alchemist" << endl
		<< " 4 - Check Inventory" << endl
		<< " 5 - Quit" << endl
		<< ">";
	cin >> input;

	return input;
}

int levelOne()
{
    int input = 0;
    cout << endl << endl;
    cout << "Ralf takes you to the center of the town" << endl;
    cin.get();
    cout << ""
}
