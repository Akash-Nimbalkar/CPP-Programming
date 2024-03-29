#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, m;
    cout << "Enter n\n";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }

    if (sum == m)
        cout << m << " is armstrong number " << endl;
    else
        cout << m << " is not armstrong number " << endl;

    return 0;
}