#include <iostream>
using namespace std;

int main()
{
    int hours;

    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 0 || hours > 24)
    {
        cout << "Invalid Parking Duration";
    }
    else if (hours <= 2)
    {
        cout << "Parking Fee = Rs. 100";
    }
    else if (hours <= 5)
    {
        cout << "Parking Fee = Rs. 200";
    }
    else if (hours <= 10)
    {
        cout << "Parking Fee = Rs. 400";
    }
    else
    {
        cout << "Parking Fee = Rs. 700";
    }

    return 0;
}
