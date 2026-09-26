#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	char op;
	
	cout << "Enter the first num: ";
	cin >> num1;
	
	cout << "Enter the sec num: ";
	cin >> num2;
	
	cout << "Enter the operator: ";
	cin >> op;
	
	if (op == '+')
	{
		cout << "Result" << num1 + num2;
	}
	else if (op == '-')
	{
		cout << "Result" << num1 - num2;
	}
	else if (op == '*')
	{
		cout << "Result" << num1 * num2;
	}
	else if (op == '/')
	{
		if (num2 == 0)
		{
			cout << "Error: Cannot divided by zero";
		}
		else
		{
			cout << "Result = " << num1/num2;
}
	}
	else
	{
		cout << "Invalid Operator";
	}
	return 0;
}
