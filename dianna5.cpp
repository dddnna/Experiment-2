#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = 0, y = 1, z, i;
    x=0;
    y=1;
    
    cout << x << ", " << y;
    for (i = 3; i <= 22; i++) 
    {
        z = x + y;
        x = y;
        y = z;
        
        cout << ", " << z;
    }   
    
    _getch();
    return 0;
}
