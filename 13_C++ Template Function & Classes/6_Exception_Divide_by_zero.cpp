#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            cout << "Result = " << a / b << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (int e)
    {
        cout << "Exception caught b = " << b << endl;
    }
    return 0;
}