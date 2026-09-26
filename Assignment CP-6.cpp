#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	
	cout << "Enter the first number: ";
	cin >> number2;
	
	cout << "Enter the sec number: ";
	cin >> number2;
	
	if (number1 > number2)
	{
		cout << number1 << "is larger";
	}
	else if (number2 > number1)
	{
		cout << number2 << "is larger";
	}
	else
	{
		cout << "Both numbers are equal";
	}
	return 0;
}

