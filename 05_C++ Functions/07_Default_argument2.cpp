#include <iostream>
using namespace std;
int maxim(int a = 0, int b = 0, int c = 0) // Default values to parameters must be given from right side parameter
{
    return a > b && a > c ? a : b > c ? b
                                      : c;
}
int main()
{
    cout << maxim() << endl;
    cout << maxim(12) << endl;
    cout << maxim(14, 23) << endl;
    cout << maxim(10, 54, 89) << endl;

    return 0;
}