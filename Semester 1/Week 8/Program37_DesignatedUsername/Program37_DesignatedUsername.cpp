#include <iostream>
#include <string>
#include <time.h>
using namespace std;

string userInput;

void newName(string userInput);

int main()
{
	cout << "Please input your desired username: " << endl;
	getline(cin, userInput);
	cout << "Sorry that username is taken, here is your new username: ";
	newName(userInput);
}

void newName(string userInput)
{
	srand(time(NULL));
	int num = rand();
	string randNum = to_string(num);
	userInput += randNum;
	cout << userInput;
	
}


