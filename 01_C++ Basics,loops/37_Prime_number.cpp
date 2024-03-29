#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter n" << endl;
    cin >> n;

    for (i; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of factors of number " << n << " is " << sum << endl;
    if (sum == n + 1)
    {
        cout << n << " is a prime number" << endl;
    }
    else
        cout << n << " is not a prime number" << endl;
    return 0;
}