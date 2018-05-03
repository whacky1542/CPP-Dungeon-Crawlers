#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int gameStart();
int dialogueBox();

int main()
{
	string location;
	int mainMenuInput = 0;
	bool invalid = true;
	while (invalid == true)
	{
		mainMenuInput = gameStart();
		if (mainMenuInput == 1)
		{
			cout << "game started";
			dialogueBox();
			location = "intro1"
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

int dialogueBox()
{
	open file ""insert location".txt"
	dialogueCode = location;
	cout << "Insert Scenario Here";
}

void intro1()
{
	cout << "Ralf -" << endl << "Hello adventurer! Welcome to the town Narnia! My name is Ralf and I’ll be your guide to DUNGEON CRAWLERS. Your goal is to gain wealth and fame by delving the endless amount of dungeons just on the edge of town. It won’t be easy to do it by your lonesome, so go over to the Blacksmith for weapons and armor or the Alchemist for potions. When you are ready to delve your first dungeon, just give the word." << endl;
	cout << "1 - Give the word" << endl;
	cout << "2 - Go to the Blacksmith" << endl;
	cout << "3 - Go to the Alchemist" << endl;
	cout << "4 - Check Inventory" << endl;
	cout << "5 - Quit" << endl << ">";
}

