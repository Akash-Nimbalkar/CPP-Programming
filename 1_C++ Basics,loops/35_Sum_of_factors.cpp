#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter n";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;

    return 0;
}