#pragma once
#include <iostream>
#include <string>
using namespace std;
void OpenBaseAccount();
void CreateAccountNumber();

class MakeAccount
{
public:
	string forename;
	string surname;
	string firstLineAddress;
	string secondLineAddress;
	string postcodeAddress;

private:

	string accountType;
	//float interestRate;
};



