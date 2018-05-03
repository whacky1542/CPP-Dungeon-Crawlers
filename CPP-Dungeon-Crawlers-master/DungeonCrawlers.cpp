#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int gameStart();
void dialogueBox();

int main()
{
	int mainMenuInput = 0;
	bool invalid = true;
	while (invalid == true)
	{
		mainMenuInput = gameStart();
		if (mainMenuInput == 1)
		{
			cout << "game started";
			invalid = false;
		}
		else if (mainMenuInput != 2)
		{
			cout << "Invalid Input" << endl;
			invalid = true;
		}
		else
		{
			invalid = false;
		}
	}
	
	//system("pause");
	return 0;
}

int gameStart()
{
	int input = 0;
	cout << "            Dungeon Crawlers" << endl << "     by Sir Risney and Dr. Johnson" << endl << "-------------------------------------------" << endl;
	cout << "1 - Start" << endl << "2 - Exit program" << endl << ">";
	cin >> input;
	
	return input;
}

void dialogueBox()
{
	cout << "Insert Scenario Here";
}

