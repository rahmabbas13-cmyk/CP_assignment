#include<iostream>
using namespace std;

int main()
{
	int speed;
	
	cout << "Enter the vehicle speed: ";
	cin >> speed;
	
	if (speed <= 60)
	{
		cout << "No Fine";
	}
	else if (speed <= 80)
	{
		cout << "Fine = Rs. 1000";
	}
	else if (speed <= 100)
	{
		cout << "Fine = Rs. 2500";
	}
	else if (speed <= 120)
	{
		cout << "Fine = Rs. 5000";
	}
	else
	{
		cout << "Fine = Rs. 10000" << endl;
		cout << "License Review";
	}
	return 0;
}
