#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter the value of n" << endl;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "The sum of natural number is " << sum;

    return 0;
}