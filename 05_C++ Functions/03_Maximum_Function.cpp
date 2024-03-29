#include <iostream>
using namespace std;
int maxim(int a, int b, int c)
{
    if ((a > b) && (a > c))
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a = 6700, b = 87, c = 98, d;
    d = maxim(a, b, c);
    cout << "maximum no.is " << d << endl;
    return 0;
}