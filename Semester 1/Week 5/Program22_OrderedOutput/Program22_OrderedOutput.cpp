#include <iostream>
using namespace std;

int main()
{

	int arr[6];
	int maxNumber = 0;
	int positionBigger;

	for(int questionNumber = 1; questionNumber < 6; questionNumber++)
	{
		cout << "Enter the value of number " << questionNumber << ": " << endl;
		cin >> arr[questionNumber];
		if (maxNumber < arr[questionNumber])
			maxNumber = arr[questionNumber];

		if (arr[questionNumber] == maxNumber)
			positionBigger = questionNumber;
	}
	for(int output = 1; output < 6; output++)
	{
		cout << arr[output] << ", ";
	}
	cout << endl;
	for(int backwards = 5; backwards > 0; backwards--)
	{
		cout << arr[backwards] << ", ";
	}
	cout << endl;

	cout << "The maximum number within the array is : " << maxNumber << "\nThe position of this number was number: " << positionBigger << endl;
	
	return 0;
}




