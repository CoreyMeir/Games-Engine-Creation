#include <iostream>
using namespace std;

int smallestNumber (int a, int b)
{
	if (a > b)
	{
		cout << "Number 1: " << a << " is bigger than number 2: " << b << endl;
	}
	else if (a < b)
	{
		cout << "Number 2: " << b << " is bigger than number 1: " << a << endl;
	}
	else if (a == b)
	{
		cout << "Number 1 and 2 have the same value " << endl;
	}

	return 0;
}

int main()
{ 
	for (int i = 1; i < 4; i++)
	{
		int number1;
		int number2;

		cout << "Enter your first number" << endl;
		cin >> number1;
		cout << "Enter your second number" << endl;
		cin >> number2;
		smallestNumber(number1, number2);

	
	}
	return 0;
}


