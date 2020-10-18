#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Please choose an option: 1.Sunny 2.Cloudy 3.Raining 4.Exit" << endl;
    cin >> userInput;

    switch (userInput)
    {
    case 1:
        cout << "Don't forget your suncream! :)" << endl;
        break;
    case 2:
        cout << "You might need a coat, it's going to be cold!" << endl;
        break;
    case 3:
        cout << "Make sure to take an umbrella with you its about to get wet" << endl;
        break;
    default:
        cout << "Goodbye" << endl;
        exit(1);
    }
        
    return 0;

 

}

