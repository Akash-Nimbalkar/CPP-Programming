#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter num";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << num << " is prime number" << endl;
    else
        cout << num << " is composite number" << endl;

    return 0;
}