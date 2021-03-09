#include "JuniorAccount.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void OpenJuniorAccount()
{
	int accountNum = 0;
	string accountType = "Junior";
	MakeJuniorAccount BaseAccount;
	cin.ignore(10, '\n');
	cout << "Please enter your forename: " << endl;
	getline(cin, BaseAccount.forename);
	cout << "Please enter your surname: " << endl;
	getline(cin, BaseAccount.surname);
	cout << "Please enter the first line of your address: " << endl;
	getline(cin, BaseAccount.firstLineAddress);
	cout << "Please enter the second line of your address: " << endl;
	getline(cin, BaseAccount.secondLineAddress);
	cout << "Please enter your postcode: " << endl;
	getline(cin, BaseAccount.postcodeAddress);

	//CreateAccountNumber();//Doesn't work, throws an error


	cout << BaseAccount.forename << endl;
	cout << BaseAccount.surname << endl;
	cout << BaseAccount.firstLineAddress << endl;
	cout << BaseAccount.secondLineAddress << endl;
	cout << BaseAccount.postcodeAddress << endl;

	fstream outFile("Accounts.txt", ios::out | ios::app);
	outFile /*<< "Account number: " << accountNum*/ << "Forename: " << BaseAccount.forename << " Surname: " << BaseAccount.surname << " Account type: " << accountType << " Address 1: " << BaseAccount.firstLineAddress << " Address 2: " << BaseAccount.secondLineAddress << " Postcode: " << BaseAccount.postcodeAddress << endl;
	outFile.close();
}
