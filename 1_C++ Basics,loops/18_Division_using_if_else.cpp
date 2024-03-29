#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by Zero";
    }
    else
    {
        c = a / b;
        cout << "Division is " << c << endl;
    }

    return 0;
}