#include <iostream>
using namespace std;

int main()
{
	int usage;
	int bill;
	
	cout << "Enter monthly water usage(litres): ";
	cin >> usage;
	
	if (usage <= 5000)
	{
		bill = 500;
	}
	else if (usage <= 10000)
	{
		bill = 1000;
	}
	else if (usage <= 20000)
	{
		bill = 2000;
	}
	else
	{
		bill = 3500;
	}
	
	cout << "Bill = Rs. " << bill << endl;
	
	if (usage > 25000)
	{
		cout << "Excessive water usage";
	}
	return 0;
}
