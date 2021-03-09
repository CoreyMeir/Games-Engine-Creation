#include <iostream>
#include <string>
#include <vector>
using namespace std;

void MagicRing(string userReplace, vector<string> inventory)
{
	if (userReplace == "1")
	{
		inventory[0] = "Magic Ring";
		cout << "Your inventory is now: " << endl;
		cout << inventory[0] << endl;
		cout << inventory[1] << endl;
		cout << inventory[2] << endl;
	}
	else if (userReplace == "2")
	{
		inventory[1] = "Magic Ring";
		cout << "Your inventory is now: " << endl;
		cout << inventory[0] << endl;
		cout << inventory[1] << endl;
		cout << inventory[2] << endl;
	}
	else if (userReplace == "3")
	{
		inventory[2] = "Magic Ring";
		cout << "Your inventory is now: " << endl;
		cout << inventory[0] << endl;
		cout << inventory[1] << endl;
		cout << inventory[2] << endl;
	}
	else
	{
		cout << "That is an invalid input! - Your inventory has stayed the same" << endl;
	}
}

int main()
{
	const int Max_Items = 3;
	vector<string> inventory;
	string userInput;
	string userReplace;

	cout << "You have started with a sword" << endl;

	for(int i = 0; i < Max_Items; i++)
	{
		cout << "Enter an item you would like to put into your inventory from the floor: Healing spell, Fire Spell, Knife, Sword" << endl;{}
		getline (cin, userInput);
		inventory.push_back(userInput);
	}

	cout << "\nYour inventory is full!\n" << endl;

	cout << "You have found a magic ring! What would you like to replace in your inventory?" << endl;
	cout << "1: " << inventory[0] << endl;
	cout << "2: " << inventory[1] << endl;
	cout << "3: " << inventory[2] << endl;
	cin >> userReplace;

	MagicRing(userReplace, inventory);

	inventory.clear();
	cout << "\nYou have been robbed! " << endl;
	cout << "Inventory is now: Empty!" << endl;

	return 0;
}
