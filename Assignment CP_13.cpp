#include <iostream>
using namespace std;

int main()
{
	int units;
	double basicBill;
	double surcharge = 0;
	double extraCharge = 0;
	double finalBill;
	
	cout << "Enter units: ";
	cin >> units;
	
	if (units <= 0)
	{
		cout << "Invalid Units";
	}
	else if (units <= 100)
	{
		basicBill = units * 10;
	}
	else if (units <= 200)
	{
		basicBill = (100 * 10) + ((100 - units) * 15);
	}
	else
	{
		basicBill = (100 * 10) + (100 *15) + ((units - 200) * 20);
	}
	if (basicBill > 3000)
	{
		surcharge = basicBill * 0.10;
	}
	if (basicBill > 5000)
	{
		extraCharge = 500;
	}
	
	finalBill = basicBill + surcharge + extraCharge;
	
	if (units > 500)
	{
		cout << "High Electricity Consumption" << endl;
	}
	cout << "Basic Bill = " << basicBill << endl;
	cout << "Surcharge = " << surcharge << endl;
	cout << "Extra charge = " << extraCharge << endl;
	cout << "Final Bill = " << finalBill << endl;
	
	return 0;
}
