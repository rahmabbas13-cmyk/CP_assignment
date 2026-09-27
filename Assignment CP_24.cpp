#include <iostream>
using namespace std;

int main()
{
    double weight;
    int deliveryType;
    int charge;

    cout << "Enter package weight (kg): ";
    cin >> weight;

    cout << "Enter delivery type (1=Normal, 2=Express): ";
    cin >> deliveryType;

    if (weight <= 0)
    {
        cout << "Invalid Weight";
    }
    else if (weight <= 1)
    {
        charge = 200;
    }
    else if (weight <= 5)
    {
        charge = 400;
    }
    else if (weight <= 10)
    {
        charge = 700;
    }
    else if (weight <= 20)
    {
        charge = 1200;
    }
    else
    {
        cout << "Package Too Heavy";
        return 0;
    }

    if (deliveryType == 1)
    {
        cout << "Delivery Type = Normal" << endl;
    }
    else if (deliveryType == 2)
    {
        charge = charge + 300;
        cout << "Delivery Type = Express" << endl;
    }
    else
    {
        cout << "Invalid Delivery Type";
        return 0;
    }

    cout << "Delivery Charge = Rs. " << charge;

    return 0;
}
