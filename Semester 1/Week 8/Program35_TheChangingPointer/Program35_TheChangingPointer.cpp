#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int &num1, int &num2, int* pNum);

int main()
{
	int num1, num2;
	inputDetails(&num1, &num2);
	int* pNum = &num1;
	outputDetails(num1, num2, pNum);
}

void inputDetails(int* n1, int* n2)
{
	cout << "Please enter your first number:" << endl;
	cin >> *n1;
	cout << "Please enter your second number:" << endl;
	cin >> *n2;

	
}

void outputDetails(int &num1, int &num2, int* pNum)
{
	cout << "num1 value - " << num1 << endl; //Not de referenced
	cout << "num1 address in memory - " << &num1 << endl;
	cout << "num2 value - " << num2 << endl;
	cout << "num2 address in memory - " << &num2 << endl;
	cout << "pNum value (the address it currently holds) - " << pNum << endl;
	cout << "pNum de referenced value - " << *pNum << endl; //DE REFERENCED WITH *
	cout << "pNum address in memory - " << &pNum << endl;
}


