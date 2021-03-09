#include <iostream>
using namespace std;

int main()
{
	string testString = "String manipulation is cool! Is it not?";
	string testString2 = "No its not";

	cout << "testString contains: " << testString << endl;
	testString.replace(28, 10, testString2);
	cout << "testString now contains: " << testString << endl;
}