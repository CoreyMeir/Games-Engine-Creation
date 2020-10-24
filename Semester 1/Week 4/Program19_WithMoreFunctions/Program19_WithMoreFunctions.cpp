#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << numOfEven << endl;
	cout << numOfOdd << endl;
	cout << evenTotal << endl;
	cout << oddTotal << endl;
}

void evenFunction(int ans, int numOfEven, int evenTotal, bool even1)
{
	cout << ans << " is even" << endl;
	numOfEven += 1;
	evenTotal += ans;
	even1 = true;
}

int main()
{
	int oddTotal = 0;
	int evenTotal = 0;
	int numOfOdd = 0;
	int numOfEven = 0;
	bool odd = false;
	bool even1 = false;


	//Creating an array
	int n[10]; /* declaring n as an array of 10 integers */
	//int j;
	int answer = 0;

	/* initializing elements of  the array n */
	for (int questionNo = 0; questionNo < 10; questionNo++)
	{
		int ans = 0;
		cout << "Enter value of number " << questionNo << ": " << endl;
		cin >> n[questionNo];
		ans = n[questionNo];

		if (ans % 2 == 0)
		{
			evenFunction(ans, numOfEven, evenTotal, even1);
		}
		else if (ans % 2 != 0)
		{
			cout << ans << " is odd" << endl;
			numOfOdd += 1;
			oddTotal += ans;
			bool odd = true;
		}

	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);

	return 0;




}
