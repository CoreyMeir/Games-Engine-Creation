// wk2_tsk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	bool a = false;
	bool b = true;

	int num1 = 12, num2 = 5, num3 = 7;




	if (a)
	{
		num1 += 10;
		num2 += 15;

	}
	else if (b)
	{
		num1++;
		num3 += 20;

	}
	else
	{
		num1--;
		num2--;
		num3--;

	}

	cout << "num1 = " << num1 << " -> num2 = " << num2 << " -> num3 = " << num3 << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
