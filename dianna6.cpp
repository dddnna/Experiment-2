#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, z;
	z = 0;
	cout << "Enter a number: ";
	cin >> x;
	
	while (x)
	{
	    for (y = 0; y <= x; y++)
	    {
	    	z = y + z;
	    }
	    cout << "The sum of all whole number from 1 to ";
	    cout << x;
	    cout << " is ";
	    cout << z;
	    cout << "." << endl;
	
	    cout << "Enter a number: ";
	    cin >> x;
	    z = 0;
	
	    if (x <= 0)
	    cout << "Thank you!";
    }
	 
	_getch(); 
	return 0;
	
}
