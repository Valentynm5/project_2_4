#include <iostream>  
using namespace std;  
  
int main()  
{  
    int a, b, c;  
    cout << "Enter number from 0 to 100:  \n";  
    cin >> a;  
    if (a >= 10 && a < 100)  
    {  
        c = a % 10;  
        b = a / 10;  
        cout << "  " << b << "    " << c << endl;  
        cout << "sum= " << b + c << endl;  
    }  
    if (a < 10)  
    {  
        cout << "  " << a << endl;  
        cout << "one x\n";  
    }  
    if (a >= 10 && a < 100)  
    {  
        cout << "two x\n";  
    }  
    if (a == 100)  
    {  
        int y;  
        c = a % 100;  
        b = a / 100;  
        y = a % 100;  
        cout << "  " << b << "     " << c << "      " << y << endl;  
        cout << "sum= " << b + c << endl;  
        cout << "three x\n";  
    }  
    if (a > 100)  
    {  
        cout << "the x must not exceed 100\n";  
    }  
    return 0;  
}