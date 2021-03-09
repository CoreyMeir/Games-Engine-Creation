#include <iostream>
using namespace std;

int main()
{
	char name[40];
	cout << "Enter your full name in the following format (i.e B B Brooker)" << endl;
	cin.getline(name, sizeof(name));

	for(int i = 0; i < sizeof(name); i++)
	{
		if (name[i] == '\0')
		{
			break;
		}
		if (name[i] == ' ')
		{
			cout << endl;
		}
		else
		{
			cout << name[i];
		}

		
	}

	
}

