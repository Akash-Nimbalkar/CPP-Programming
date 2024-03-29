#include <iostream>
using namespace std;

int main()
{
    int i, n;
    unsigned long long fact = 1;
    cout << "Enter n" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "The factorial of " << n << " is " << fact;
    return 0;
}