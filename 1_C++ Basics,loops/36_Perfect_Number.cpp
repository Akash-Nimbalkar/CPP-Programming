#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter n\n";
    cin >> n;

    for (i; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of factors of number " << n << " is " << sum;

    if (sum == 2 * n)
    {
        cout << "\nYour number is perfect number" << endl;
    }
    else
    {
        cout << "Your number is not a perfect number";
    }

    return 0;
}