#include <iostream>
using namespace std;

int main()
{
	int userInput;
	string tryAgain;

	const int Max_Items_In_Inventory = 4;
	const int Max_Items_On_Player = 1;
	int numItemsInInventory = 0;
	int numItemsOnPlayer = 0;
	string onPlayer[Max_Items_On_Player];
	onPlayer[numItemsOnPlayer] = "Staff";
	string inventory[Max_Items_In_Inventory];
	inventory[numItemsInInventory++] = "Sword";
	inventory[numItemsInInventory++] = "Battle Axe";
	inventory[numItemsInInventory++] = "Healing Potion";
	inventory[numItemsInInventory++] = "Dagger";

	cout << "You have picked up a wizard's staff\nWould you like to swap it for a dagger in your inventory?\n[1 to keep the staff / 2 to swap for the dagger]" << endl;
	cin >> userInput;

		if (userInput == 1)
		{
			cout << "You have kept the staff!\nYou have a " << onPlayer[0] << " on you.\n";
			cout << "\nYour inventory contains:\n" << inventory[0] << "\n" << inventory[1] << "\n" << inventory[2] << "\n" << inventory[3] << endl;
		}
		else if (userInput == 2)
		{
			inventory[3] = "Nothing";
			onPlayer[0] = "Dagger";
			cout << "Your third inventory slot now contains: " << inventory[3] << "\nYou now have a " << onPlayer[0] << " on you.\n" << endl;
			cout << "Your inventory contains:\n" << inventory[0] << "\n" << inventory[1] << "\n" << inventory[2] << "\n" << inventory[3] << endl;
			
		}
		else
		{
			cout << "That choice is invalid" << endl;
			
		}
	
	return 0;
}

