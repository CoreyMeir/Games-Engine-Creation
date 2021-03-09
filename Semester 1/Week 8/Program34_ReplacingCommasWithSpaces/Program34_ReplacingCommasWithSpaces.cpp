#include <iostream>
using namespace std;

void comma2blank(char* textToChange, int arrSize);

int main()
{
	char someText[128];
	cout << "Please enter some text, however instead of using spaces please use commas instead" << endl;
	cin >> someText;

	comma2blank(someText, 128);

	cout << someText << endl;
}

void comma2blank(char* textToChange, int arrSize)
{
	for(int numInLoop = 0; numInLoop < arrSize; numInLoop++)
	{
		if (textToChange[numInLoop] == ',')
		{
			textToChange[numInLoop] = ' ';
		}
	}
	
}

