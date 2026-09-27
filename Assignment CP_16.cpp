#include <iostream>
using namespace std;

int main()
{
	int usage;
	int bill;
	
	cout << "Enter the (GB) Used: ";
	cin >> usage;
	
	if (usage <= 5)
	{
		bill = 500;
	}
	else if (usage <=15)
	{
		bill = 800;
	}
	else if (usage <= 30)
	{
		bill = 1200;
	}
	else
	{
		bill = 1800;
	}
	
	cout << "Bill = Rs." << bill << endl;
	
	if (usage > 50)
	{
		cout << "Heavy user";
	}
	return 0;
}
