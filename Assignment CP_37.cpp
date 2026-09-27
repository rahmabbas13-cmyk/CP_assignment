#include <iostream>
using namespace std;

int main()
{
    int choice;
    double result;

    cout << "1. USD" << endl;
    cout << "2. EUR" << endl;
    cout << "3. GBP" << endl;
    cout << "4. SAR" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            result = 10000 * 0.0036;
            cout << "USD = " << result;
            break;

        case 2:
            result = 10000 * 0.0031;
            cout << "EUR = " << result;
            break;

        case 3:
            result = 10000 * 0.0027;
            cout << "GBP = " << result;
            break;

        case 4:
            result = 10000 * 0.0135;
            cout << "SAR = " << result;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
