#include <iostream>
using namespace std;

int main()
{
    int temperature;
    int weather;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter weather (1=Sunny, 2=Rainy, 3=Cloudy): ";
    cin >> weather;

    if (weather == 1)
    {
        if (temperature >= 25)
            cout << "Good for Outdoor Activity";
        else
            cout << "Normal Day";
    }
    else if (weather == 2)
    {
        cout << "Stay Indoors";
    }
    else if (weather == 1)
    {
        if (temperature >= 20 && temperature <= 30)
            cout << "Outdoor Activity Possible";
        else
            cout << "Normal Day";
    }
    else
    {
        cout << "Normal Day";
    }

    return 0;
}
