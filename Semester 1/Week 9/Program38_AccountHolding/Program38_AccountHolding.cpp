#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct details
{
	string name;
	int accountNumber;
	double balance;
};

int main()
{
	details instance1;
	details instance2;
	bool loopingQuestion = true;
	bool userChoice1 = true;
	bool while2;
	int userChoice;
	char moreDetails;
	char choice;

	//Create an outFile and inFile using ofstream and ifstream

	while(loopingQuestion)
	{
		cout << "What would you like to do?: " << endl;
		cout << "1. Enter new details" << endl;
		cout << "2. Display the contents of the file" << endl;
		cout << "3. Display the accounts that have over 10,000 " << endl;
		cout << "4. Exit the program " << endl;

		cin >> userChoice;

		if(userChoice == 1)
		{
			details instance1;
			fstream outFile("DetailsNew.txt", ios::in | ios::app);
			userChoice1 = true;
			while(userChoice1)
			{
				if(outFile)
				{
					cout << "Please enter your name: " << endl;
					cin >> instance1.name;
					cout << "Please enter your account number: " << endl;
					cin >> instance1.accountNumber;
					cout << "Please enter your balance: " << endl;
					cin >> instance1.balance;

					outFile << "Name: " << instance1.name << endl;
					outFile << "Account number: " << instance1.accountNumber << endl;
					outFile << "Bank balance: " << instance1.balance << endl;

					cout << "Would you like to do this again? y/n " << endl;
					cin >> choice;
					if(choice == 'y')
					{
						userChoice1 = true;
						loopingQuestion = true;
					}
					else if(choice != 'y')
					{
						userChoice1 = false;
						loopingQuestion = true;
					}
					
				}
				else if(!outFile)
				{
					cerr << "File could not be opened!";
					exit(1);
				}
				
			}
			
			
		}
		else if(userChoice == 2)
		{
			string line;
			fstream outfile("DetailsNew.txt");
			if(outfile.is_open())
			{
				while ( getline (outfile,line))
				{
					cout << line << '\n';
				}
				

				outfile.close();
			}
			else
			{
				cout << "Unable to find file" << endl;
			}

			
			loopingQuestion = true;
		}
		else if (userChoice == 3)
		{	
			loopingQuestion = true;
		}
		else if (userChoice == 4)
		{
			loopingQuestion = false;
		}
		else
		{
			cout << "That is not a valid choice, please try again: " << endl;
			loopingQuestion = true;
		}
	}
	

	
}


