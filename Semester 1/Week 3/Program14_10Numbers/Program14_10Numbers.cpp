// Program14_10Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void TotalAndMean(vector<int> arr);


int main()
{

    int num1;
    int num2;
    int total1;
    int mean1;
    bool notZero = true;


    cout << "Please enter a number: " << endl;
    cin >> num1;

    cout << "Please enter another number: " << endl;
    cin >> num2;

    total1 = num1 + num2;
    mean1 = (num1 + num2) / 2;

    cout << "The sum of your numbers is: " << total1 << "\nThe mean of your numbers is: " << mean1 << endl;

    vector<int> allNumbers;
    allNumbers.push_back(num1);
    allNumbers.push_back(num2);

    TotalAndMean(allNumbers);

    while (notZero)
    {
        int num3;
        cout << "Please enter another number: (0 to exit the program)" << endl;
        cin >> num3;

        if (num3 == 0)
        {
            notZero = false;
        }
        else
        {
            allNumbers.push_back(num3);
            TotalAndMean(allNumbers);
        }
        

    }
   


}

void TotalAndMean(vector<int> arr)
{
    int total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        total += arr[i];
    }

    cout << "Total: " << total << endl;
    cout << "Mean: " << total / arr.size() << endl;
}

