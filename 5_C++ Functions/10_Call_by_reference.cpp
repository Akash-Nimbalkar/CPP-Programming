#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    cout << &a << " " << &b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 23, y = 9;
    swap(x, y);
    cout << &x << " " << &y << endl;
    cout << "in main " << x << " " << y << endl;

    return 0;
}