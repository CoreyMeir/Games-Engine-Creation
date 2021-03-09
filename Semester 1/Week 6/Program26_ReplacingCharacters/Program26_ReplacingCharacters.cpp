#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	cout << "Enter any sentence that you like: " << endl;
	getline(cin, sentence);
	for(int i = 0; i < sentence.length(); i++)
	{
		if(sentence[i] == 'e')
		{
			sentence[i] = 'X';
		}
		
	}

	cout << sentence << endl;
}
