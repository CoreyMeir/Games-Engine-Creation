#include <iostream>
using namespace std;

int main()
{
	int num;
	int& rNum = num;
    cout << "Please enter a number: " << endl;
	cin >> rNum;
	cout << "Num = " << num << endl;
	rNum += 25;
	cout << "Num = " << num << endl;

	cout << "Please enter another number:" << endl;
	cin >> rNum;
	cout << "Num = " << num << endl;
	rNum -= 25;
	cout << "Num = " << num << endl;
}

