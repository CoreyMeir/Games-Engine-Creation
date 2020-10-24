#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "The number of even numbers you inputted was - " << numOfEven << endl;
	cout << "The number of odd numbers you inputted was - " << numOfOdd << endl;
	cout << "The sum of the even numbers you inputted was - " << evenTotal << endl;
	cout << "The sum of the odd numbers you inputted was - " << oddTotal << endl;
}

bool isEven(int ans)
{
	if (ans % 2 == 0)
	{
		return true;
	}

	return false;
}

int main()
{
	int oddTotal = 0;
	int evenTotal = 0;
	int numOfOdd = 0;
	int numOfEven = 0;


	//Creating an array
	int n[11]; /* declaring n as an array of 10 integers */
	int answer = 0;

	/* initializing elements of  the array n */
	for (int questionNo = 1; questionNo < 11; questionNo++)
	{
		int ans = 0;
		cout << "Enter value of number " << questionNo << ": " << endl;
		cin >> n[questionNo];
		ans = n[questionNo];

		if (isEven(ans))
		{
			cout << ans << " is even\n " << endl;
			numOfEven += 1;
			evenTotal += ans;
		}
		else
		{
			cout << ans << " is odd\n " << endl;
			numOfOdd += 1;
			oddTotal += ans;
		}
		
		
	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);


	return 0;
}

