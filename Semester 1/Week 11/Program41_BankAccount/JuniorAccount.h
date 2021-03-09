#pragma once
#include <string>
#include <iostream>
#include "BaseAccount.h"
using namespace std;
class MakeJuniorAccount : public MakeAccount
{
public:

private:

	string accountType;
	//float interestRate;
};

void OpenJuniorAccount();
