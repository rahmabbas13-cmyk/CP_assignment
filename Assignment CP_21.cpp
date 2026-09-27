#include <iostream>
using namespace std;

int main()
{
    int speed;

    cout << "Enter internet speed (Mbps): ";
    cin >> speed;

    if (speed < 5)
        cout << "Very Slow" << endl;

    else if (speed <= 20)
        cout << "Slow" << endl;

    else if (speed <= 50)
        cout << "Average" << endl;

    else if (speed <= 100)
        cout << "Fast" << endl;

    else
        cout << "Very Fast" << endl;

    if (speed > 200)
        cout << "Excellent Connection";

    return 0;
}
