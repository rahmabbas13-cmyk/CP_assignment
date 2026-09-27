#include <iostream>
using namespace std;

int main()
{
	int choice;
	
	cout << "MENU" << endl;
	cout << "1. Burger" << endl;
	cout << "2. Pizza" << endl;
	cout << "3. Fries" << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << "You selected a Burger";
			break;
			
		case 2:
			cout << "You selected a Pizza";
			break;
			
		case 3:
			cout << "You selected fries";
			break;
			
		default:
			cout << "Invalid choice";
	}
	return 0;
}
