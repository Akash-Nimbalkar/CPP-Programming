#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    cout << "Before swapping a and b are " << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping a and b are " << a << " " << b << endl;

    return 0;
}