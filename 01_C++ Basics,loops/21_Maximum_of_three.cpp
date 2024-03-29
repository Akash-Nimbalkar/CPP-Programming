#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values of a,b and c" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a is max number";
    }
    else
    {
        if (b > c)
        {
            cout << "b is max number";
        }
        else
        {
            cout << "c is max number";
        }
    }

    return 0;
}