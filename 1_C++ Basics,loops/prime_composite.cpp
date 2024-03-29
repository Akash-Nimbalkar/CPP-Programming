#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        return true;
    else
        return false;
}
int main()
{
    int rng;
    cout << "Enter range";
    cin >> rng;

    int i = 0, count = 0;
    while (i <= rng)
    {
        bool ans = isPrime(i);
        if (ans)
        {
            cout << i << " is prime number " << endl;
            count++;
        }
        else
        {
            cout << i << " is composite number" << endl;
        }
        i++;
    }
    cout << "Total Prime numbers in the range 1-" << rng << " are " << count << endl;
    return 0;
}