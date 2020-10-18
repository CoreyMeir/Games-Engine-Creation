// LoopExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{


    // For loop 

    int x = 0;

    cout << "++i: " << endl;

    for (int i = 0; i < 10; ++i)
    {

        cout << i;

    }


    cout << "\n++i: " << endl;
    for (int i = 0; i < 10; i++)
    {

        cout << i;

    }


    cout << "\ni--: " << endl;
    for (int i = 9; i >= 0; i--)
    {

        cout << i;

    }

   /* bool player_alive = true;

    // While loop

    int i = 0;

    while (i < 10)
    {
        cout << "i: " << i << endl;
        i++;
    }
   

    // Do While Loop
    bool PlayerDies = false;
  do
    {
        if (PlayerDies())
            player_alive = false;


    } while (player_alive == true);
 
 */

    // Nested loop

    for (int i = 0; i < 10; i++)
    {
        cout << "Line: " << i << endl;

        for (int j = 0; j < 10; j++)
        {
            cout << j << "";

        }

        cout << endl;
    }

    //Breaking a loop

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i;
    }


    //Continuing a loop
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i;
    }


}

bool PlayerDies()
{
    return true;
}




