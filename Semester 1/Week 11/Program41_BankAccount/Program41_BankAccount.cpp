#include <iostream>
#include <string>
#include <fstream>
#include "BaseAccount.h"
#include "JuniorAccount.h"
#include "SavingsAccount.h"
using namespace std;

void MainMenu();
void OpenAccount();
void ViewAccount();
void CloseAccount();
void BackToMainMenu();

bool askingMain = true;
bool asking = true;


int main()
{
	MainMenu();
}

void MainMenu()
{
	int userChoice;
	askingMain = true;

	while(askingMain)
	{
		cout << "Please choose an option: " << endl;
		cout << "1. Open a new account" << endl;
		cout << "2. View an account" << endl;
		cout << "3. Close an account" << endl;
		cout << "4. Exit Program" << endl;
		cin >> userChoice;
		if(userChoice == 1)
		{
			askingMain = false;
			OpenAccount();
			
		}
		else if(userChoice == 2)
		{
			askingMain = false;
			ViewAccount();
		/*
		 *Ask user to input the account number as an int
		 *Check that it is an int
		 *Convert to string to check against the file
		 *If it is correct then display details
		 *Return to menu
		 *
		 * I did not end up getting round to doing the account number system as I focused more on FOGGS from this point.
		 */
		}
		else if (userChoice == 3)
		{
			askingMain = false;
			CloseAccount(); //Very broken, will only work for the first name in the file and will overwrite the whole file to closed account if it matches... didn't have time to complete this :(
		}
		else if (userChoice == 4)
		{
			exit(1); //Exit with code 1 so that I know this is the point the program exited and not somewhere else for a different reason
		}
		else
		{
			cout << "That is not a valid choice, please try again... " << endl;
			askingMain = true;
		}
	}
	
	
}

void OpenAccount()
{
	enum AccountType{GENERAL = 1, JUNIOR, SAVINGS};
	int userChoice;
	asking = true;
	while (asking)
	{
		cout << "Please choose an account to open: " << endl;
		cout << "1. General Account" << endl;
		cout << "2. Junior Account" << endl;
		cout << "3. Savings Account" << endl;
		cout << "4. Return to main menu" << endl;
		cin >> userChoice;
		if (userChoice == GENERAL)
		{
			OpenBaseAccount();
			BackToMainMenu();
		}
		else if (userChoice == JUNIOR)
		{
			OpenJuniorAccount();
			BackToMainMenu();
		}
		else if (userChoice == SAVINGS)
		{
			OpenSavingsAccount();
			BackToMainMenu();
		}
		else if (userChoice == 4)
		{
			BackToMainMenu();
		}
		else
		{
			cout << "That is not a valid choice, please try again... " << endl;
			asking = true;
		}
	}
}

void ViewAccount()
{
	string line;
	fstream inFile;
	inFile.open("Accounts.txt", ios::in | ios::app);
	if (inFile.is_open())
	{

		while (getline(inFile, line))
		{
			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Can't open the file\n";
	}

	system("pause");
	BackToMainMenu();
}
	

void CloseAccount()
{
	int numOfCharacters;
	string nameToRemove;
	string nameToSee;
	cout << "What is the forename of the account you would like to close? (Please type exactly how it appears, i.e 'Corey') " << endl;
	cin.ignore(10, '\n');
	getline(cin, nameToRemove);
	cout << "How many characters is this name? (i.e 'Corey' is 5): " << endl;
	cin >> numOfCharacters;
	
	
	int loopCount = 0;
	string names[100] = {};
	int scores[100] = {};
	string line;
	fstream inFile;
	inFile.open("Accounts.txt", ios::in | ios::app);
	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			
			for (int i = 0; i < line.length(); i++)//Searches through each line of what we want to find in that line
			{
				int j = i;
				names[loopCount] = line.substr(10, numOfCharacters);
				cout << names[loopCount];
				if (names[loopCount] == nameToRemove)
				{
					fstream outFile("Accounts.txt", ios::out | ios::trunc);
					outFile << "Closed Account" << endl;
					outFile.close();
				}
				else
				{
					cout << "There is no matching name to remove, sorry please try this process again... " << endl;
					cout << names[loopCount];
					BackToMainMenu();
				}
				
				
				
			
			}
			
			
		}
		
		inFile.close();
	}
	else
	{
		cout << "Can't open the file\n";
	}
}

void BackToMainMenu()
{
	asking = false;
	askingMain = true;
	MainMenu();
}





