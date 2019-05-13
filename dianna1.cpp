#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char pkg;
	int hrs;
	
	cout << "Package A: \n P995/mo \n 10 hours of access \n P20/hr for additional hours"<< endl;
	cout << "" << endl;
	cout << "Package B: \n P1495/mo \n 20 hours of access \n P10/hr for additional hours"<< endl;
	cout << "" << endl;
	cout << "Package C: \n P1995/mo \n Unlimited access"<< endl;	
	cout << "" << endl;
	
	cout << "Enter the package purchased: ";
	cin >> pkg;
	cout << "Enter the hours consumed: ";
	cin >> hrs;
	
	switch(pkg)
	{
		case 'a':
		case 'A':
		if (hrs<=10)
		cout << "\nThe amount due is P995";
	else	if (hrs>10)
	{
		cout << "\nThe amount due is P";
		cout << 995 + (20*(hrs-10));
	}
		break;
		
		case'b':
		case 'B':
		if (hrs<=20)
		cout<<"\nThe amount due is P1495";
	else	if (hrs>20)
	{
		cout<<"\nThe amount due is P";
		cout<< 1495 + (10*(hrs-20));
	}
		break;
		
		case 'c':
		case 'C':
		cout << "\nThe amount due is P1995";
		break;
		
	}
	
	
	
	_getch();
	return 0;
	
}
