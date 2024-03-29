#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    int **k;
    k = &ptr;

    cout << x << endl;
    cout << *ptr << endl;
    cout << **k << endl;

    cout << ptr << endl;
    cout << &x << endl;
    cout << *k << endl;

    cout << &ptr << endl;
    cout << k << endl;

    cout << &k << endl;

    return 0;
}