#include <iostream>
using namespace std;

int main()
{
    
    int numOfPackets = 40;
    int numOfStudents = 14;

    int eachStudent = numOfPackets / numOfStudents;
    int remainder = numOfPackets % numOfStudents;

    cout << "Each student gets " << eachStudent << " packets of haribos." << endl;
    cout << "I get the remaining " << remainder << " packets of haribos." << endl;

    return 0;

}


