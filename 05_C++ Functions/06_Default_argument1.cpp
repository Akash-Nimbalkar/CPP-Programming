#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0) // c is default(optional) argument.
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 6) << endl;
    cout << sum(10, 8, 12) << endl;
    return 0;
}