#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter number \n";
    cin >> a;
    if (a <= 100)
    {
        b = a/10;
        c = a%10;
        cout <<"b="<<b<<" c=" <<c<<endl;
        cout << "sum=" <<b+c<<endl;
    }
    if (a>10 && a<100)
    {
        cout << "two number\n";
    }
    if (a>100)
    {
        cout << "not\n";
    }
    return 0;
}