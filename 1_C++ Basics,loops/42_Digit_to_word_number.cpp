// Display for eg. 185 as one eight five
#include <iostream>
using namespace std;

int main()
{
    int n, r, m, sum = 0, rev = 0;
    cout << "Enter n" << endl;
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    m = rev;
    while (m != 0)
    {
        switch (m % 10)
        {

        case 0:
            cout << "Zero\t";
            break;
        case 1:
            cout << "One\t";
            break;
        case 2:
            cout << "Two\t";
            break;
        case 3:
            cout << "Three\t";
            break;
        case 4:
            cout << "Four\t";
            break;
        case 5:
            cout << "Five\t";
            break;
        case 6:
            cout << "Six\t";
            break;
        case 7:
            cout << "Seven\t";
            break;
        case 8:
            cout << "Eight\t";
            break;
        case 9:
            cout << "Nine\t";
            break;
        }
        m = m / 10;
    }

    return 0;
}