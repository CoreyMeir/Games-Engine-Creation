#include <iostream>
using namespace std;

void Loop(int numOfRows)
{
    for (int down = 1; down <= numOfRows; ++down)
    {
        for (int across = 1; across <= down; ++across)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int numOfRows = 1;
    char YesOrNo;
    bool looping = true;

    

    while (looping)
    {
        cout << "Enter a number between 1 and 10: ";
        cin >> numOfRows;
        if (numOfRows > 0 && numOfRows <= 10)
        {
            Loop(numOfRows);
            cout << "Would you like to play again? [Y/N]" << endl;
            cin >> YesOrNo;
            if (YesOrNo == 'N' || YesOrNo == 'n')
            {
                looping = false;
            }
        }
        else if (numOfRows < 0 || numOfRows > 10)
        {
            cout << "Please enter a number between 1 and 10" << endl;
            numOfRows = 1;
        }
        
    }
  


    return 0;
}


