#include <iostream>
using namespace std;

int main()
{
    
    int rain = 1;
    int snow = 2;

    int userWeather;
    double userTemperature;

    cout << "Please tell me if it is raining with '1' or snowing with '2'" << endl;
    cin >> userWeather;

    cout << "What is the temperature in celcius? " << endl;
    cin >> userTemperature;

    if (userWeather == rain)
    {
        if (userTemperature > 15)
            cout << "Wear a light raincoat." << endl;
        else
            (cout << "Wear a thick coat" << endl);
    }
    else if (userWeather == snow)
    {
        if (userTemperature > 5)
            cout << "Wear something warm for sure" << endl;
        else if (userTemperature > 0)
            cout << "Wrap up well" << endl;
        else
            cout << "Stay at home " << endl;
            
    }

    return 0;

}


