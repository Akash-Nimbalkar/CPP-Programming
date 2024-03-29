#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    {
        int c;
        c = a + b;
        if (c > 10)
        {
            cout << c << endl;
        }
    }
    // cout << c << endl;
    return 0;
}