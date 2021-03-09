#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string array[5];                          // creates array to hold names
    short loop;                               //short for loop for input
    short loop2;                               //short for loop for output
    string line;                              //this will contain the data read from the file
    ifstream myfile("example.txt");          //opening the file.
    if (myfile.is_open())                     //if the file is open
    {
        while (!myfile.eof())                 //while the end of file is NOT reached
        {
            getline(myfile, line);                //get one line from the file
            cout << line << endl;                //and output it
            for (loop = 0; loop < 5; loop++)         //criteria for input loop (as array 0-5)
            {
                array[loop] = line;                     //output loop statement
            };
            for (loop2 = 0; loop2 < 5; loop2++)      //criteria for output loop (as array 0-5)
            {
                cout << array[loop2];                     //loop statement
            };
        }
        myfile.close();                         //closing the file
    }
    else cout << "Unable to open file";       //if the file is not open output 
    system("PAUSE");


    system("PAUSE");
    return 0;
}
