#include <iostream>
using namespace std;

int main()
{
	int units;
	int bill;
	
	cout << "Enter units: ";
	cin >> units;
	
	if (units <= 1000)
	{
		bill = units * 100;
	}
	else if (units <= 200)
	{
		bill = (100 * 10) + ((units - 100) * 15);
	}
	else 
	{
		(100 * 10) + (100 * 15) + ((units - 200) * 20);
	}
	cout << "Bill" << bill;
	
	return 0;
}
