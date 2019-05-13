#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int a = 0;
	cout << "Counting..." << endl;
	
	while (a < 10) 
	{
		cout << a;
		cout << ", ";
		a++;
	}
	while (a <= 29) 
	{
		cout << a;
		cout << ", ";
		a = a + 2;
	}
	while (a == 30)
	{
		cout << a;
		a = a + 2;
	}

    getch();
	return 0;
}
