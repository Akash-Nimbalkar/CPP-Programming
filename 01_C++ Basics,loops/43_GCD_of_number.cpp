#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;
    cout << "Enter the values of m and n" << endl;
    cin >> m >> n;
    p = m;
    q = n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD of " << p << " and " << q << " is " << m;

    return 0;
}