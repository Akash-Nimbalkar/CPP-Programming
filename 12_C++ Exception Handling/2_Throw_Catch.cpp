#include <iostream>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
        throw 1;
    return a / b;
}

int main()
{
    int a = 10, b = 0, c;
    try
    {

        c = division(a, b);
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "Division by Zero"
             << " Error Code " << e << endl;
    }
    cout << "Bye" << endl;
    return 0;
}