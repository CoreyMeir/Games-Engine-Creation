#include <iostream>
using namespace std;

int main()
{
    
    int userGameChoice;
    char status;

    cout << "Please tell me your status with s for student, t for teacher or o for other." << endl;
    cin >> status;

    cout << "Which game would you like to play 1 or 2?" << endl;
    cin >> userGameChoice;

    if (status == 's' || status == 't')
    {
        if (userGameChoice == 1)
            cout << "You are entitled to a 20% discount" << endl;
        else if (userGameChoice == 2)
            cout << "You are entitled to a 10% discount" << endl;
        else
            cout << "You are not entitled to a discount" << endl;
    }
    else
    {
        cout << "You are not entitled to a discount" << endl;
    }

    return 0;

}

