#include <iostream>
using namespace std;

int playerHealth = 10000;
int enemyHealth = 10000;
bool playing = true;

void attackChoice(int playerChoice)
{
	const int sword_damage = 300;
	const int magic_damage = 650;
	const int axe_damage = 450;
	const int troll_sword = 350;
	const int troll_magic = 50;
	const int troll_axe = 100;

	switch (playerChoice)
	{
	case 1:
		enemyHealth -= sword_damage;
		playerHealth -= troll_sword;
		cout << "You have hit the troll!\nYou have been hit!" << endl;
		if(playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if(enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Your current health is - " << playerHealth << endl;
		cout << "The trolls current health is - " << enemyHealth << "\n" << endl;
		break;
	case 2:
		enemyHealth -= magic_damage;
		playerHealth -= troll_magic;
		cout << "You have hit the troll!\nYou have been hit!" << endl;
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Your current health is - " << playerHealth << endl;
		cout << "The trolls current health is - " << enemyHealth << "\n" << endl;
		break;
	case 3:
		enemyHealth -= axe_damage;
		playerHealth -= troll_axe;
		cout << "You have hit the troll!\nYou have been hit!" << endl;
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Your current health is - " << playerHealth << endl;
		cout << "The trolls current health is - " << enemyHealth << "\n" << endl;
		break;
	default:
		{
			
		}
		
	}
}

bool playState()
{
	char playAgain;
	if (enemyHealth <= 0)
	{
		cout << "You have killed the troll and won!" << endl;
		cout << "Would you like to play again? Y/N" << endl;
		cin >> playAgain;
		if (playAgain == 'Y' || playAgain == 'y')
		{
			enemyHealth = 10000;
			playerHealth = 10000;
			playing = true;
		}
		else
		{
			playing = false;
		}
	}
	else if (playerHealth <= 0)
	{
		cout << "You have been killed by the troll and lost!" << endl;
		cout << "Would you like to play again? Y/N" << endl;
		cin >> playAgain;
		if (playAgain == 'Y' || playAgain == 'y')
		{
			enemyHealth = 10000;
			playerHealth = 10000;
			playing = true;
		}
		else
		{
			playing = false;
		}
	}

	return false;
}


int main()
{

	int playerChoice;

	while (playing == true)
	{
		cout << "You have encountered a troll, you have 3 options to attack this troll\n1.Use Sword\n2.Use Magic\n3.Use axe\nBe warned, each of these choices have different effects" << endl;
		cin >> playerChoice;
		attackChoice(playerChoice);
		playState();
		
	}

	return 0;
	
}


