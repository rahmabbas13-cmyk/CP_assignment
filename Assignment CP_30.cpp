#include <iostream>
using namespace std;

int main()
{
	int choice;
	
	cout << "Enter traffic light number (1-3): ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << "Red";
			break;
			
		case 2:
			cout << "Yellow";
			break;
			
		case 3:
			cout << "Green";
			break;
			
		default:
			cout << "Invalid Choice";
			break;
	}
	return 0;
}
