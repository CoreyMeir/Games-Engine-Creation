// wk2_tsk3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

	//int player_input;
	//cout << "enter 0 or 1..." << endl;

	//cin >> player_input;

	//switch (player_input)
	//{
	//case 0:

	//	break;
	//case 1:
		//add code if 0 or 1
	//	break;
	//default:
		//add code if none
	//	break;
	//}

	char play_again;

	cout << "Do you want to play again? " << endl;
	cin >> play_again;

	switch (play_again)
	{
	case 'y':
		cout << "You chose to play again..." << endl;
		break;
	case 'n':
		cout << "Goodbye" << endl;
		break;
	default:
		cout << "That's not y or n" << endl;
		break;


	}

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
