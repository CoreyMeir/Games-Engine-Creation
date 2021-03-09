#include <iostream>
#include <string>
using namespace std;


struct personDetails
{
	string name;
	string telephoneNumber;
	int age;

	void displayDetails()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Telephone Number: " << telephoneNumber << endl;
	}
};

int main()
{
	personDetails Person;
	
	cout << "Please enter your name: " << endl;
	getline(cin, Person.name);

	cout << "Please enter your age: " << endl;
	cin >> Person.age;

	cout << "Please enter your telephone number: " << endl;
	cin >> Person.telephoneNumber;

	Person.displayDetails();
}


