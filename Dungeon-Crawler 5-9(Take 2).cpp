#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int gameStart();
int controlScreen();
int controlScreenFirst();
int startIntroFirst();
void importantFunction();
void openLevelOne(double healthPoints, double enemyHealth, double attackPoints);
void levelOne(double &healthPoints, double enemyHealth, double attackPoints);

int main()
{
	controlScreenFirst();
	importantFunction();

	system("pause");
	return 0;
}

void importantFunction()
{
	int mainMenuInput = 0;
	int controlScreenInput = 0;
	bool invalid = true;
	int startIntroFirstInput = 0;
	int openLevelOneInput = 0;
	double healthPoints = 10;
	double attackPoints = 2;
	double enemyHealth = 0;
	bool invalid = true;

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
				    openLevelOne(healthPoints, enemyHealth, attackPoints);
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
		<< " delving into the perilous dungeons just on the edge of" << endl
		<< " town. It won\'t be easy to do by your lonesome, so" << endl
		<< " go over to the Blacksmith for weapons and armor," << endl
		<< " and if you need potions, just visit the Alchemist" << endl
		<< " over there. When you are ready to delve into your first" << endl
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

void openLevelOne(double healthPoints, double enemyHealth, double attackPoints)
{
    int input = 0;
    cout << endl << endl;
    cout << "Ralf takes you to the center of the town. There is a well in the center of the crossroads." << endl;
    cin.get();
    cout << "*Ralph points at the well*" << endl << "This is the first dungeon." << endl
		 << "1 - What?" << endl
		 << "2 - The well?" << endl
		 << "3 - Okay!" << endl
		 << "4 - Wait! I forgot my glasses!" << endl
		 << ">";
	cin >> input;
	if(input != 3)
	{
		cout << "*Ralph pushes you into the well. You scream as you fall for a single second into the three foot deep well.*" << endl;
		levelOne(healthPoints, enemyHealth, attackPoints);
	}
	else
	{
		cout << "*You jump into the short well." << endl;
		levelOne(healthPoints, enemyHealth, attackPoints);
	}
}
void levelOne(double &healthPoints, double enemyHealth, double attackPoints)
{
	enemyHealth = 3;
	int input = 0;
	cout << "*You notice a small hole in the wall of the well, just big enough for you to crawl through." << endl;
	cin.ignore();
	cin.get();
	cout << "*You decide to crawl through the hole as Ralf is still watching you from above with a sinister expression." << endl
		 << "*You stand up and assess your surroundings. You are in a cube-shaped room with a signle door in front of you. There is a rat in the corner, eating a piece of cheese. What do you do?" << endl
		 << "1 - Open the door" << endl
		 << "2 - \"En garde!\"" << endl
		 << ">";
	cin  >> input;
	if (input == 1)
	{
		cout << "Too bad, the rat tripped you with its tail. -1 HP";
		healthPoints -= 1;
	}
	else if(input == 2)
	{
		cout << "You attack the rat first. -2 HP" << endl;
		enemyHealth -= attackPoints;
		cout << "Enemy HP: " << enemyHealth << "/3";
		cout << "The rat gnaws on your toes. -1 HP" << endl;
		healthPoints -= 1;
	}
}

void battleSequence(double &healthPoints, double &enemyHealth, double &attackPoints, double enemyAttackPoints)
{
	while(enemyHealth > 0)
	{
		bool invalid = true;
		while(invalid = true)
		{
			cout << "You encounter a " << enemyName << "with " << enemyHealth << "HP" << endl;
			cout << "1 - Attack" << endl << ">";
			cin >> input;
			if (input == 1)
			{
				cout << "You did " << attackPoints << " damage" << endl;
				invalid = false;
			}
			else 
			{
				cout << "Invalid" << endl;
				invalid = true;
			}
		}
		enemyHealth -= attackPoints;
		cout << enemyName << " has " << enemyHealth << " HP" << endl;
		cout << enemyName << " attacks you for " << enemyAttackPoints << endl;
		healthPoints -= enemyAttackPoints;
	}
}
