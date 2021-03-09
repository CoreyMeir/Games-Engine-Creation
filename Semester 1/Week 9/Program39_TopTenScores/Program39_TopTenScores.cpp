#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

void InputScore();
void DisplayScores();
int GetSmallestElement(int is[10], int i);

struct Scores;
using namespace std;

bool loopingMenu = true;
int menuChoice;

vector<Scores>* scores;

struct Scores
{
	string Name;
	int Score;
};

int main()
{
	scores = new vector<Scores>();
	
	while (loopingMenu)
	{
		cout << "Please choose an option:" << endl;
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit" << endl;
		cin >> menuChoice;

		if (menuChoice == 1)
		{
			InputScore();
		}
		else if (menuChoice == 2)
		{
			DisplayScores();

		}
		else if (menuChoice == 3)
		{
			return 1;
		}
		else
		{
			loopingMenu = true;
		}
	}
}



void InputScore()
{
	
	int loopCount = 0;
	string names[10] = {};
	int scores[10] = {};
	string line;
	
	fstream inFile;
	inFile.open("Scores.txt", ios::in | ios::app);
	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			int indexOfSpace = 0;
			for (int i = 7; i < line.length(); i++)
			{
				if (line[i] == ' ')
				{
					indexOfSpace = i;
					break;
				}
			}
			scores[loopCount] = stoi(line.substr(7, indexOfSpace - 7));
			names[loopCount] = line.substr(indexOfSpace + 7, line.length() - (indexOfSpace + 6));
			loopCount++;
		}
		inFile.close();
	}
	else
	{
		cout << "Can't open the file\n";
	}

	Scores newScore;
	string name;
	int temporaryScore;
	cout << "Please enter your name: " << endl;
	cin.ignore(1000, '\n');
	getline(cin, newScore.Name);
	
	cout << "Please enter your score: " << endl;
	cin >> temporaryScore;
	while (cin.fail())
	{
		cout << "That is not an integer please try again..." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> temporaryScore;
		while (temporaryScore < 0)
		{
			cout << "That is below zero and not valid, please try again..." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temporaryScore;

		}
	}
	while (temporaryScore < 0)
	{
		cout << "That is below zero and not valid, please try again..." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> temporaryScore;
		while (cin.fail())
		{
			cout << "That is not an integer please try again..." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> temporaryScore;
		}
	}

	if (loopCount == 10)
	{
		int lowestScore = GetSmallestElement(scores, loopCount);
		int lowestScoreIndex = 0;
		for (int i = 0; i < 10; i++)
		{
			if (scores[i] == lowestScore)
			{
				lowestScoreIndex = i;
			}
		}
		newScore.Score = temporaryScore;
		if (newScore.Score > lowestScore)
		{
			scores[lowestScoreIndex] = newScore.Score;
			names[lowestScoreIndex] = newScore.Name;
		}

		fstream outFile("Scores.txt", ios::out | ios::trunc); //Not truncating
		for(int i = 0; i < 10; i++)
		{
			outFile << "Score: " << scores[i] << " Name: " << names[i] << endl;
			
		}
		outFile.close();

		
		inFile.open("Scores.txt", ios::in | ios::app);
		if (inFile.is_open())
		{

			while (getline(inFile, line))
			{
				cout << line << endl;
			}
			inFile.close();
		}
	}
	else
	{
		newScore.Score = temporaryScore;
		cout << newScore.Name << "\n" << newScore.Score << endl;
		fstream outFile("Scores.txt", ios::in | ios::app);

		outFile << "Score: " << newScore.Score << " Name: " << newScore.Name << endl;
		outFile.close();
	}
	

	loopingMenu = true;
}

void DisplayScores()
{
	string line;
	fstream inFile;
	inFile.open("Scores.txt", ios::in | ios::app);
	if (inFile.is_open())
	{
		
		while (getline(inFile, line))
		{
			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Can't open the file\n";
	}

	system("pause");
}

int GetSmallestElement(int arr[], int n) {
	int temp = arr[0];
	for (int i = 0; i < n; i++) {
		if (temp > arr[i]) {
			temp = arr[i];
		}
	}
	return temp;
}