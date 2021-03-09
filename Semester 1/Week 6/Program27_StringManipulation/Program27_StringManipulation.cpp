#include <iostream>
#include<string>
using namespace std;


int main()
{
	string testString = "Do you know who loves C++? XX does!";
	string name1, name2;

	cout << "What is your name? (i.e Barnaby): " << endl;
	getline(cin, name1);

	for (int i = 0; i < testString.length(); i++)
	{
		if (testString[i] == 'X')
		{
			testString.insert(i + 1, name1);
			break;
		}
	}

	cout << testString << endl;
	
	for (int i = 0; i < testString.length(); i++)
	{
		if (testString[i] == 'X')
		{
			testString.erase(i, 1);
		}
	}
	
	cout << testString << endl;

	bool name2IsBigger = false;
	while(!name2IsBigger)
	{
		cout << "Please enter another name: " << endl;
		cin >> name2;

		if(name2.length() > name1.length())
		{
			name2IsBigger = true;
			size_t position = testString.find(name1);
			testString.replace(position, name1.length(), name2);
			cout << testString << endl;
		}
		else
		{
			cout << "The new name must be larger than the first name" << endl;
		}
	}

	return 0;

}