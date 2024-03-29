#include <iostream>
using namespace std;
void swap(int a, int b) // formal parameters
{
    cout << "In void function before swapping " << a << " " << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "In void function after swapping " << a << " " << b << endl;
}
int main()
{
    int x = 15, y = 22; // actual parameters

    swap(x, y);
    cout << "After swapping " << x << " " << y;
    return 0;
}