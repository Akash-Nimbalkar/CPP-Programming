#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, r, sum = 0, m;
    cout << "Enter number" << endl;
    cin >> n;
    m = n;
    while (n > 0)
    {

        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "The reverse of " << m << " is " << rev;

    return 0;
}