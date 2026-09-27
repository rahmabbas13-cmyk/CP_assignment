#include <iostream>
using namespace std;

int main()
{
	int english, math, physics, chemistry, computer;
	int total;
	double percentage;
	
	cout << "Enter english marks: ";
	cin >> english;
	
	cout << "Enter math marks: ";
	cin >> math;
	
	cout << "Enter physics marks: ";
	cin >> physics;
	
	cout << "Enter chemistry marks: ";
	cin >> chemistry;
	
	cout << "Enter computer marks: ";
	cin >> computer;
	
	total = english + math + physics + chemistry + computer;
	percentage = total/500 * 100;
	
	cout << "Total = " << total << endl;
	cout << "Percentage = " << percentage << endl;
	
	if (percentage < 50 ||
	    english < 40 ||
	    math < 40 ||
	    physics < 40 ||
	    chemistry < 40 ||
	    computer < 40)
		 
	{
		cout << "Result = Fail " << endl;
		cout << "Grade = F " << endl;
		cout << "Scholarship = No sholarship";
	}
	else
	{
		cout << "Result = PASS" << endl;
		
		
		if (percentage <= 80)
		{
			cout << "Grade A" << endl;
		}
		else if (percentage >= 70)
		{
			cout << "Grade B" << endl;
		}
		else if (percentage >= 60)
		{
			cout << "Grade C" << endl;
		}
		else
		{
			cout << "Grade D" << endl;
		}
		
		if (percentage >= 90 &&
		    english >= 80 &&
		    math >= 80 &&
		    physics >= 80 &&
		    chemistry >= 80 &&
		    computer >= 80)
		{
			cout << "Scholarship = 50%";
		}
		else if (percentage >= 80 &&
		    english >= 70 &&
		    math >= 70 &&
		    physics >= 70 &&
		    chemistry >= 70 &&
		    computer >= 70)
		{
			cout << "Scholarship = 25%";
		}
		else
		{
			cout << "No scholarship";
		}
	}
	return 0;	
}
