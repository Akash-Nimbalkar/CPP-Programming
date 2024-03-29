#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, r, m;

    cout << "Enter n" << endl;
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    if (rev == m)
        cout << m << " is palindrome number" << endl;
    else
    {
        cout << m << " is not a palindrome number" << endl;
    }

    return 0;
}