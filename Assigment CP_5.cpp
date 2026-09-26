#include <iostream>
using namespace std;

int main()
{
	int temperature;
	
	cout << "Enter the tempertaure: ";
	cin >> temperature;
	
	if (temperature > 30)
	{
		cout << "It is Hot";
	}
	else
	{
		cout << "Normal temperature";
	}
	return 0;
}
