#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter the number\n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    cout << sum;
    return 0;
}