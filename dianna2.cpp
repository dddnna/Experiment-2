#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int gal;
	double unp;
	char q;
	
	cout<< fixed << showpoint<< setprecision(2);
	
	cout << "Enter the amount of water consumed in gallons: ";
	cin >> gal;
	cout<< "" << endl;
	
	cout << "Is there an unpaid balance? Enter Y for yes, N for no: ";
	cin >> q;
	
	switch (q)
	{
		case 'y':
		case 'Y':
		cout<< "Enter the unpaid balance: ";
		cin >> unp;
		cout << "\nThe amount due is P";
		cout << 35 + 20 + unp + (gal*1.10);
		break;
		
		case 'n':
		case 'N':
		cout<< "\nThe amount due is P";
		cout<< 35 + (gal*1.10);
		break;
	}
	
	
	
	
	getch();
	return 0;
}
