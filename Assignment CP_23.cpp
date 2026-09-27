#include <iostream>
using namespace std;

int main()
{
    double total, attended, attendance;

    cout << "Enter total classes: ";
    cin >> total;

    cout << "Enter attended classes: ";
    cin >> attended;

    if (total <= 0 || attended < 0 || attended > total)
    {
        cout << "Invalid Input";
    }
    else
    {
        attendance = (attended / total) * 100;

        cout << "Attendance = " << attendance << "%" << endl;

        if (attendance >= 90)
            cout << "Excellent Attendance";
        else if (attendance >= 75)
            cout << "Eligible";
        else if (attendance >= 60)
            cout << "Warning";
        else
            cout << "Not Eligible";
    }

    return 0;
}
