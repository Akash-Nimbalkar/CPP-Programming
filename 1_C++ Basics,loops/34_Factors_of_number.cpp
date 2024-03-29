#include <iostream>
using namespace std;

int main()
{
    int i, n, factor;
    cout << "Enter n" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " is a factor of " << n << endl;
        else
            cout << i << " is not a factor of " << n << endl;
    }
    return 0;
}