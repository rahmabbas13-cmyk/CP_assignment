#include <iostream>
using namespace std;

int main()
{
    int days;
    int fine;

    cout << "Enter delay days: ";
    cin >> days;

    if (days < 0)
    {
        cout << "Invalid Days";
    }
    else if (days == 0)
    {
        cout << "No Fine";
    }
    else if (days <= 5)
    {
        fine = days * 20;
        cout << "Fine = Rs. " << fine;
    }
    else if (days <= 10)
    {
        fine = days * 30;
        cout << "Fine = Rs. " << fine;
    }
    else if (days <= 20)
    {
        fine = days * 50;
        cout << "Fine = Rs. " << fine;
    }
    else
    {
        fine = 1000;
        cout << "Fine = Rs. " << fine;
    }

    return 0;
}
