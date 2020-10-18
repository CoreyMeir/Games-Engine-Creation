#include <iostream>
using namespace std;

int main()
{
    typedef int cost;
    enum CarMake
    {
        FORD = 1,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE

    };

    cost Cost = 1300;
    CarMake p = CarMake::HONDA;


    cout << "The cost of my car is " << Cost << endl;
    cout << "My car ID is " << p << endl;


}

