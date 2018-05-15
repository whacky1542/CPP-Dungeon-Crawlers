#include <iostream>
#include <string>

using namespace std;

void startScreen();
void controls();
void mainMenu();
void controls2();
void startGame();
void blacksmith(int &playerDamage, int &playerDefence, int &gold);
void alchemist(int &potion, int &gold);
void levelOneEntrance(int &playerHealth, int &playerDamage, int playerDefence, int &potion, int &gold);
void levelOne(int &playerHealth, int &playerDamage, int playerDefence, int &potion, int &gold);
void startGame2(int &playerHealth, int &playerDamage, int &playerDefence, int &potion, int &gold);

int main()
{
	startScreen();
	controls();
}

void startScreen()
{
	cout << "   DUNGEON CRAWLERS   " << endl
	<< "a text based adventure" << endl
	<< "----------------------" << endl
	<< " By Alex and Brendan " << endl;
	cin.ignore();
	cout << endl;
}

void controls()
{
	int input = 0;
	bool invalid = true;
	while (invalid == true)
	{
		cout << "Controls:" << endl
		<< "> = input" << endl
		<< "1, 2, 3, etc. = numbers that you enter" << endl
		<< "1 - Main Menu" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
			invalid = false;
		}
		else
		{
			cout << "INVALID INPUT" << endl << endl;
			invalid = true;
		}
	}
	cout << endl;
	mainMenu();
}

void mainMenu()
{
	int input = 0;
	bool invalid = true;
	while (invalid == true)
	{
		cout << "Main Menu:" << endl
		<< "1 - Start Game" << endl
		<< "2 - Controls" << endl
		<< "3 - Quit" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
			cout << endl;
			startGame();
			invalid = true;
		}
		else if (input == 2)
		{
			cout << endl;
			controls2();
			invalid = true;
		}
		else if (input == 3)
		{
			cin.ignore();
			invalid = false;
		}
		else
		{
			cout << "INVALID INPUT" << endl;
			invalid = true;
		}
	}
}

void controls2()
{
	int input = 0;
	bool invalid = true;
	while (invalid == true)
	{
		cout << "Controls:" << endl
		<< "> = input" << endl
		<< "1, 2, 3, etc. = numbers that you enter" << endl
		<< "1 - Main Menu" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
			invalid = false;
		}
		else
		{
			cout << "INVALID INPUT" << endl;
			invalid = true;
		}
	}
	cout << endl;
}

void startGame()
{
	int playerHealth = 10;
	int playerDamage = 2;
	int playerDefence = 0;
	int potion = 0;
	int gold = 15;
	int input = 0;
	bool invalid = true;
	while (invalid == true)
	{
		cout << "Ralf:" << endl
		<< "Hello adventurer! Welcome to the city of Pochinki!" << endl
		<< "my name is Ralf and I\'ll be your guide to DUNGEON" << endl
		<< "CRAWLERS. Your goal is to gain fame and fortune by" << endl
		<< "delving into the perilous dungeons just on the edge of" << endl
		<< "town. It won\'t be easy to do by your lonesome, so" << endl
		<< "go over to the Blacksmith for weapons and armor," << endl
		<< "and if you need potions, just visit the Alchemist" << endl
		<< "over there. When you are ready to delve into your first" << endl
		<< "dungeon, just give the word." << endl
		<< "1 - Give the word" << endl
		<< "2 - Go to the Blacksmith" << endl
		<< "3 - Go to the Alchemist" << endl
		<< "4 - Check stats" << endl
		<< "5 - Quit to main menu" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
			cout << "You give the word" << endl;
			cin.ignore();
			cin.get();
			levelOneEntrance(playerHealth, playerDamage, playerDefence, potion, gold);
			invalid = false;
		}
		else if (input == 2)
		{
			cout << "You go to the Blacksmith" << endl;
			cin.ignore();
			cin.get();
			blacksmith(playerDamage, playerDefence, gold);
			startGame2(playerHealth, playerDamage, playerDefence, potion, gold);
			invalid = false;
		}
		else if (input == 3)
		{
			cout << "You go to the Alchemist" << endl;
			cin.ignore();
			cin.get();
			alchemist(potion, gold);
			startGame2(playerHealth, playerDamage, playerDefence, potion, gold);
			invalid = false;
		}
		else if (input == 4)
		{
			cout << "HP: " << playerHealth << endl
			<< "AP: " << playerDamage << endl
			<< "Defence: " << playerDefence << endl
			<< "Gold: " << gold << endl
			<< "Potions: " << potion << endl;
			cin.ignore();
			cin.get();
			invalid = true;
		}
		else if (input == 5)
		{
			cout << endl;
			invalid = false;
		}
	}
}

void startGame2(int &playerHealth, int &playerDamage, int &playerDefence, int &potion, int &gold)
{
    int input = 0;
	bool invalid = true;
	while (invalid == true)
	{
		cout << "Ralf:" << endl
		<< "Welcome Back! Are you ready?" << endl
		<< "1 - Give the word" << endl
		<< "2 - Go to the Blacksmith" << endl
		<< "3 - Go to the Alchemist" << endl
		<< "4 - Check stats" << endl
		<< "5 - Quit to main menu" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
			cout << "You give the word" << endl;
			cin.ignore();
			cin.get();
			levelOneEntrance(playerHealth, playerDamage, playerDefence, potion, gold);
			invalid = false;
		}
		else if (input == 2)
		{
			cout << "You go to the Blacksmith" << endl;
			cin.ignore();
			cin.get();
			blacksmith(playerDamage, playerDefence, gold);
			invalid = true;
		}
		else if (input == 3)
		{
			cout << "You go to the Alchemist" << endl;
			cin.ignore();
			cin.get();
			alchemist(potion, gold);
			invalid = true;
		}
		else if (input == 4)
		{
			cout << "HP: " << playerHealth << endl
			<< "AP: " << playerDamage << endl
			<< "Defence: " << playerDefence << endl
			<< "Gold: " << gold << endl
			<< "Potions: " << potion << endl;
			cin.ignore();
			cin.get();
			invalid = true;
		}
		else if (input == 5)
		{
			cout << endl;
			invalid = false;
		}
	}
}

void blacksmith(int &playerDamage, int &playerDefence, int &gold)
{
    int input;
    bool invalid = true;
    cout << "Welcome to the Blacksmith, my name is Lod. Check out my wares!" << endl;
    while (invalid == true)
    {
        cout << "1 - Buy sword" << endl
        << "2 - Buy shield" << endl
        << "3 - Leave" << endl
        << "You have " << gold << " gold." << endl
        << "> ";
        cin >> input;
        if (input == 1)
        {
            if (gold >= 10)
            {
                cout << "You purchased the sword and gained +1 damage" << endl;
                gold -= 10;
                playerDamage += 1;
            }
            else
            {
                cout << "Not enough gold" << endl;
            }
            invalid = true;
        }
        else if (input == 2)
        {
            if (gold >= 10)
            {
                cout << "You purchased the shield and gained +1 defence" << endl;
                gold -= 10;
                playerDefence += 1;
            }
            else
            {
                cout << "Not enough gold" << endl;
            }
            invalid = true;
        }
        else if (input == 3)
        {
            invalid = false;
        }
        else
        {
            cout << "INVALID INPUT" << endl;
			invalid = true;
        }
    }
}

void alchemist(int &potion, int &gold)
{
    int input;
    bool invalid = true;
    cout << "Welcome to the Alcemist, my name is Arcadia. Check out my wares!" << endl;
    while (invalid == true)
    {
        cout << "1 - buy health potion" << endl
        << "2 - Leave" << endl
        << "You have " << gold << " gold." << endl
        << "> ";
        cin >> input;
        if (input == 1)
        {
            if (gold >= 5)
            {
                gold -= 5;
                potion += 1;
                cout << "You purchased a potion and now have " << potion << " many" << endl;
            }
            else
            {
                cout << "Not enough gold" << endl;
            }
            invalid = true;
        }
        else if (input == 2)
        {
            invalid = false;
        }
        else
        {
            cout << "INVALID INPUT" << endl;
			invalid = true;
        }
    }
}

void levelOneEntrance(int &playerHealth, int &playerDamage, int playerDefence, int &potion, int &gold)
{
	int input = 0;
	bool invalid = true;
	cout << "Ralf takes you to the center of the town. There is a well in the center of the crossroads.";
	cin.get();
	cout << endl;
	cout << "Ralph points at the well" << endl
	<< "This is the first dungeon." << endl;
	while (invalid == true)
	{
		cout << "1 - What?" << endl
		<< "2 - The well?" << endl
		<< "3 - Okay!" << endl
		<< "4 - Wait! I forgot my glasses!" << endl
		<< ">";
		cin >> input;
		if (input == 1)
		{
		    cout << "No time for questions! Ralph pushes you into the well. You scream as you fall for a single second into the three foot deep well.";
		    invalid = false;
		    cin.ignore();
			cin.get();
			cout << endl;
			levelOne(playerHealth, playerDamage, playerDefence, potion, gold);
		}
		else if (input == 2)
		{
		    cout << "Indeed! Ralph pushes you into the well. You scream as you fall for a single second into the three foot deep well.";
		    invalid = false;
		    cin.ignore();
			cin.get();
			cout << endl;
			levelOne(playerHealth, playerDamage, playerDefence, potion, gold);
		}
		else if (input == 3)
		{
		    cout << "You jump willy-nilly into the shallow well.";
		    invalid = false;
		    cin.ignore();
			cin.get();
			cout << endl;
			levelOne(playerHealth, playerDamage, playerDefence, potion, gold);
		}
		else if (input == 4)
		{
		    cout << "Glasses? What glasses? Ralph pushes you into the well. You scream as you fall for a single second into the three foot deep well.";
		    invalid = false;
		    cin.ignore();
			cin.get();
			cout << endl;
			levelOne(playerHealth, playerDamage, playerDefence, potion, gold);
		}
		else
		{
		    cout << "INVALID INPUT";
		    invalid = true;
		    cin.ignore();
			cin.get();
		}
		cout << endl;
	}
}

void levelOne(int &playerHealth, int &playerDamage, int playerDefence, int &potion, int &gold)
{
    int enemyStats[3][2] = {{3, 1}, {5, 2}, {10, 3}};
	//int enemyStats[0][0] = 3;
	//int enemyStats[0][1] = 1;
	//int enemyStats[1][0] = 5;
	//int enemyStats[1][1] = 2;
	//int bossHealth = 10;
	//int bossDamage = 3;
	int input = 0;
	int input2 = 0;
	bool invalid = true;
	
	cout << "You notice a small hole in the wall of the well, just big enough for you to crawl through.";
	cin.get();
	cout << endl;
	cout << "You decide to crawl through the hole as Ralf is still watching you from above with a sinister expression." << endl
	<< "You stand up and assess your surroundings. You are in a cube-shaped room with a single door in front of you." << endl
	<< "There is a rat in the corner, eating a piece of cheese. What do you do?" << endl
	<< "1 - Try to Open the door" << endl
	<< "2 - En garde!" << endl
	<< ">";
	cin >> input;
	while (invalid == true)
	{
		if (input == 1)
		{
			cout << "You move towards the door, but the rat sticks out its tail and trips you. -1 HP" << endl;
			playerHealth -= 1;
			cout << "You now have " << playerHealth << " HP" << endl;
			invalid = false;
		}
		else if (input == 2)
		{
			cout << "You attack the rat first for " << playerDamage << " HP" << endl;
			enemyStats[0][0] -= playerDamage;
			cout << "The rat now has " << enemyStats[0][0] << " HP" << endl;
			invalid = false;
			if (enemyStats[0][0] <= 0)
			{
			    cout << "You deafeated the rat! +5 gold" << endl;
			    gold += 5;
			}
		}
		else
		{
			cout << "INVALID INPUT" << endl;
			invalid = true;
		}
	}
	while (enemyStats[0][0] > 0)
	{
		if (playerHealth > 0)
		invalid = true;
		while (invalid == true)
		{
			cout << "What will you do now?" << endl
			<< "1 - Attack" << endl
			<< "2 - Do nothing" << endl
			<< "3 - Use potion" << endl
			<< ">";
			cin >> input;
			if (input == 1)
			{
				cout << "You attack the rat for " << playerDamage << " HP" << endl;
				enemyStats[0][0] -= playerDamage;
				if (enemyStats[0][0] > 0)
				{
					cout << "The rat now has " << enemyStats[0][0] << " HP" << endl;
				}
				else
				{
					cout << "You killed the rat +5 gold" << endl << endl;
					gold += 5;
				}
				invalid = false;
			}
			else if (input == 2)
			{
				cout << "You do nothing" << endl;
				invalid = false;
			}
			else if (input == 3)
			{
			    if(potion > 0)
			    {
    			    playerHealth += 3;
    			    potion -= 1;
    			    cout << "You use a potion and now have " << playerHealth << " HP" << endl;
			    }
			    else
			    {
			        cout << "You do not have any potions" << endl;
			    }
			    invalid = true;
			}
			else
			{
				cout << "INVALID INPUT" << endl;
				invalid = true;
			}
		}
		if(enemyStats[0][0] > 0)
		{
			if (playerHealth > 0)
			{
				cout << "The rat attacks you for " << enemyStats[0][1] - playerDefence << " HP" << endl;
				playerHealth -= enemyStats[0][1] - playerDefence;
				if (playerHealth > 0)
				{
					cout << "You now have " << playerHealth << " HP" << endl;
				}
				else
				{
					cout << "The rat has killed you" << endl;
					cout << "GAME OVER" << endl;
					invalid = false;
					enemyStats[0][0] = 0;
					cin.ignore();
					cin.get();
				}
			}
		}
	}
	if (playerHealth > 0)
	{
	    cout << "After defeating the rat, you continue through the door and enter a long, dimly lit hallway";
	    cin.ignore();
	    cin.get();
	    invalid = true;
	    while (invalid == true)
	    {
	        cout << "After walking down the hallway for a bit of time, you find two doors on your left and right" << endl
	        << "Both doors are identical and could have anything in them" << endl
	        << "1 - Open the right door" << endl
	        << "2 - Open the left door" << endl
	        << "3 - Chicken out and continue down the hallway" << endl
	        << ">";
	        cin >> input;
	        if (input == 1)
	        {
	            while (invalid == true)
	            {
    	            cout << "You move towards the right door and hear a faint clacking of bones" << endl
    	            << "As you are about to open the door, you hesitate for a moment" << endl
    	            << "1 - Proceed to open the door" << endl
    	            << "2 - Back out" << endl
    	            << ">";
    	            cin >> input2;
    	            if (input2 == 1)
    	            {
    	                cout << "You opened the door to find a group of bone chimes that seem to periodically move" << endl
    	                << "Underneath the chimes, there is a small rusted chest";
    	                cin.ignore();
    	                cin.get();
    	                cout << "You open the chest and find 10 gold and a health potion" << endl
						<< "After looting the chest, you continue down the hallway" << endl;
    	                potion += 1;
    	                gold += 10;
    	                invalid = false;
    	                cin.ignore();
    	                cin.get();
    	            }
    	            else if (input2 == 2)
    	            {
    	                cout << "You cation away from the door" << endl;
    	                cin.ignore();
    	                cin.get();
    	                invalid = false;
    	            }
    	            else
    	            {
    	                cout << "INVALID INPUT" << endl;
    	            }
	            }
	        }
	        else if (input == 2)
	        {
	            cout << "You move towards the left door and start to open it";
	            cin.ignore();
	            cin.get();
	            cout << "As it starts to creak open, a heap of bones leaps out and points its sword at you";
	            cin.get();
	            invalid = true;
	            cout << "The skeleton has " << enemyStats[1][0] << " health" << endl;
	            while (enemyStats[1][0] > 0)
	            {
    	            if (playerHealth > 0)
    	            {
        	            while (invalid == true)
        	            {
            	            cout << "What will you do?" << endl
            	            << "1 - Attack (" << playerDamage << " damage)" << endl
            	            << "2 - Use a potion (" << potion << ")" << endl
            	            << ">";
            	            cin >> input;
            	            if (input == 1)
            	            {
            	                cout << "You attack the skeleton for " << playerDamage << " damage" << endl;
            	                enemyStats[1][0] -= playerDamage;
            	                cout << "The skeleton now has " << enemyStats[1][0] << " health" << endl;
            	                invalid = false;
            	            }
            	            else if (input == 2)
            	            {
								if(potion > 0)
								{
					    			playerHealth += 3;
					    			potion -= 1;
					    			cout << "You use a potion and now have " << playerHealth << " HP" << endl;
								}
								else
								{
								    cout << "You do not have any potions" << endl;
								}
            	            }
            	            else
            	            {
            	                cout << "INVALID INPUT" << endl;
            	            }
        	            }
        	            if (enemyStats[1][0] > 0)
        	            {
        	                cout << "The skeleton attacks you for " << enemyStats[1][1] << " damage" << endl;
        	                playerHealth -= enemyStats[1][1] - playerDefence;
        	                cout << "You now have " << playerHealth << " health" << endl;
        	                invalid = true;
        	            }
        	            else
        	            {
        	                cout << "You've defeated the skeleton! +10 gold" << endl
							<< "After defeating the skeleton, you continue down the hallway" << endl;
        	                gold += 10;
        	                cin.ignore();
        	                cin.get();
        	                cout << endl;
        	            }
    	            }
	            }
	            if (playerHealth <= 0)
	            {
	                cout << "GAME OVER" << endl;
	                invalid = false;
	            }
	        }
	        else if (input == 3)
	        {
	            cout << "You continue down the hallway, ignoring the doors, until you come across a key" << endl
	            << "You pick up the key and find that it has an engraving spelling out the words \'Key of Cowardice\'" << endl
				<< "You don\'t see anything nearby that looks like something you could use it on so you continue down the hallway" << endl;
	            invalid = false;
	        }
	        else
	        {
	            cout << "INVALID INPUT" << endl << endl;
	            invalid = true;
	        }
	        if (input2 == 2)
	        {
	            invalid = true;
	        }
	    }
	}
	if (playerHealth > 0)
	{
		cout << ""
	}
	if (playerHealth > 0)
	{
	cout << "You win!!";
	cin.get();
	}
}