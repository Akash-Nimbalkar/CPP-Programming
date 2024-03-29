#include <iostream>
using namespace std;

int main()
{
    char op;
    int a, b;
    cout << "Enter number " << endl;
    cin >> a >> b;
    cout << "Enter operation (+,-,*,/)" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum of " << a << " and " << b << " is " << a + b;
        break;
    case '-':
        cout << "Subtraction of " << a << " and " << b << " is " << a - b;
        break;
    case '*':
        cout << "Mul. of " << a << " and " << b << " is " << a * b;
        break;
    case '/':
        cout << "Division of " << a << " and " << b << " is " << a / b;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}