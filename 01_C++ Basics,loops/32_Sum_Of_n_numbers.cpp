#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " natural number is " << sum << endl;
    return 0;
}