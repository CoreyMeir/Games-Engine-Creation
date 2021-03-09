#include <iostream>
using namespace std;

char boardCards[10] = {'D', 'E', 'A', 'C', 'B', 'C', 'E', 'D', 'B', 'A' };
bool cardsFound[10] = { false };
int noAttempts = 0;
int score = 0;

void DrawBoard();
void DrawBoardWithParameters(int firstChoice, int secondChoice);



int main()
{
	bool playing = true;
	


	while (playing)
	{
		DrawBoard();
		int firstChoice = 0, secondChoice = 0;
		
		cout << "Make your first guess (from right to left 1,2,3,4,5): " << endl;
		cin >> firstChoice;
		while (firstChoice > 5 || firstChoice < 1)
		{
			cout << "Sorry, that choice is invalid, please try again..." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> firstChoice;
		}
		DrawBoardWithParameters(firstChoice, secondChoice);
		cout << "\nMake your second guess (from right to left 1,2,3,4,5): " << endl;
		cin >> secondChoice;
		while (secondChoice > 10 || secondChoice < 6)
		{
			cout << "Sorry, that choice is invalid, please try again..." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> secondChoice;
		}
		DrawBoardWithParameters(firstChoice, secondChoice);
		system("pause");

		if(boardCards[firstChoice - 1] == boardCards[secondChoice - 1])
		{
			score++;
			cardsFound[firstChoice - 1] = true;
			cardsFound[secondChoice - 1] = true;
		}
		else
		{
			cout << "No match" << endl;
		}
		
		noAttempts++;
		if(score == 5)
		{
			cout << "Your score is: " << score << endl;
			cout << "You won well done!" << endl;
			playing = false;
		}
	}


}

void DrawBoard()
{
	system("cls");
	cout << "Your number of attempts is: " << noAttempts << endl;
	cout << "Your score is: " << score << endl;
	for(int i = 0; i < 10; i++)
	{
		if (cardsFound[i])
		{
			cout << "[" << boardCards[i] << "]" << endl;
		}	
		else
		{
			cout << "[" << i + 1 << "]" << endl;
		}
		if (i == 4)
		{
			cout << "\n";
		}
			
	}
}

void DrawBoardWithParameters(int firstChoice, int secondChoice)
{
	system("cls");
	cout << "Your number of attempts is: " << noAttempts << endl;
	cout << "Your score is: " << score << endl;
	for(int i = 0; i < 10; i++)
	{
		if(cardsFound[i] || (i+1 == firstChoice) || (i+1 == secondChoice))
		{
			cout << "[" << boardCards[i] << "]";
		}
		else
		{
			cout << "[" << i + 1 << "]";
		}
		if(i == 4)
		{
			cout << "\n";
		}
	}
}




