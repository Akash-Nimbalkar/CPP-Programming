#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d, r1, r2;
    cout << "Enter the values of a,b and c" << endl;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d == 0)
    {
        cout << "Roots are Real and equal\n";
        cout << (-b / (2 * a));
    }

    else if (d > 0)
    {
        cout << "Roots are real and unequal\n";
        cout << (-b + sqrt(d)) / (2 * a) << endl;
        cout << (-b - sqrt(d)) / (2 * a) << endl;
    }

    else
    {
        cout << "Roots are imaginery\n";
    }

    return 0;
}