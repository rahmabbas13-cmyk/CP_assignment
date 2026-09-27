#include <iostream>
using namespace std;

int main()
{
	int matric, intermediate, test;
	
	cout << "Enter Matric percentage: ";
	cin >> matric;
	
	cout << "Enter Intermediate percentage: ";
	cin >> intermediate;
	
	cout << "Enter entry test percentage: ";
	cin >> test;
	
	if (matric < 0 || matric > 100 ||
	intermediate < 0 || intermediate > 100 ||
	test < 0 || test > 100)
	{
		cout << "Invalid Marks";
	}
	else if (matric >= 60 && intermediate >= 60 && test >= 50)
	{
		cout << "Eligible for admission";
	}
	else
	{
		cout << "Not eligible";
	}
	return 0;
}
