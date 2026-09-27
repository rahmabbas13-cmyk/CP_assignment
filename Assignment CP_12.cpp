#include <iostream>
using namespace std;

int main()
{
	int pin;
	int balance;
	int amount;
	
	cout << "Enter PIN: ";
	cin >> pin;
	
	cout << "Enter balance: ";
	cin >> balance;
	
	cout << "Enter withdrawal amount: ";
	cin >> amount;
	
	if (pin != 1234)
	{
		cout << "Invalid PIN";
	}
	else if (amount <= 0)
	{
		cout << "Invalid amount";
	}
	else if (amount % 50 != 0)
	{
		cout << "Amount must be the multiple of 500";
	}
	else if (amount > balance)
	{
		cout << "Insufficient balance";
	}
	else if (balance - amount < 1000)
	{
		cout << "Minimum balance of Rs. 1000 required";
	}
	else
	{
		balance = balance - amount;
		
		cout << "Withdrawal balance: " << endl;
		cout << "Remaining balance: " << balance; 
	}
	return 0;
}
