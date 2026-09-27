#include <iostream>
using namespace std;

int main()
{
	int age;
	int tickets;
	int ticketType;
	
	double ticketPrice;
	double total;
	double discount;
	double groupDiscount = 0;
	double finalBill;
	
	cout << "Enter age: ";
	cin >> age;
	
	cout << "Enter tickets: ";
	cin >> tickets;
	
	cout << "Enter ticketType(1=Regular, 2=VIP, 3=Premium): ";
	cin >> ticketType;
	
	if (tickets <= 0 || tickets > 10)
	{
		cout << "Invaild ticket number";
	}
	else if (ticketType < 1 || ticketType > 3)
	{
		cout << "Invalid ticket Type";
	}
	
	else
	{
		if (ticketType ==1)
		{
			ticketPrice = 500;
		}
		else if (ticketType == 2)
		{
			ticketPrice = 1000;
		}
		else
		{
			ticketPrice = 1500;
		}
		
		total = ticketPrice * tickets;
		if (age < 12)
		{
			discount = total * 0.50;
		}
		else if (age <= 25)
		{
			discount = total * 0.20;
		}
		else if (age >= 60)
		{
			discount = total * 0.30;
		}
		else
		{
			discount = 0;
		}
		
		finalBill = total - discount;
		
		if (total > 5000)
		{
			groupDiscount = finalBill * 0.10;
			finalBill = finalBill - groupDiscount;
		}
		cout << "Ticket Price = " << ticketPrice << endl;
        cout << "Total = " << total << endl;
        cout << "Age Discount = " << discount << endl;
        cout << "Group Discount = " << groupDiscount << endl;
        cout << "Final Bill = " << finalBill;
        
        return 0;
}
}
