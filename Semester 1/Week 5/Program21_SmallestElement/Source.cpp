#include <iostream>;
using namespace std;


int main()
{
	int arrayNums[11], maxNumber = 0, minNumber = 100000000, positionSmaller = 1, positionBigger = 1;
	
	for (int questionNumber = 1; questionNumber < 11; questionNumber++)
	{
		cout << "Enter the value of number " << questionNumber << ": " << endl;
		cin >> arrayNums[questionNumber];
		if (maxNumber < arrayNums[questionNumber])
			maxNumber = arrayNums[questionNumber];

		if (minNumber > arrayNums[questionNumber])
			minNumber = arrayNums[questionNumber];

		if (arrayNums[questionNumber] == maxNumber)
			positionBigger = questionNumber;
		if (arrayNums[questionNumber] == minNumber)
			positionSmaller = questionNumber;



		
	}

	cout << "The maximum number within the array is : " << maxNumber << "\nThe position of this number was number: " << positionBigger <<endl;
	cout << "The minimum number within the array is : " << minNumber << "\nThe position of this number was number: " << positionSmaller << endl;

	return 0;
}
