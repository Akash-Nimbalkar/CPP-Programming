#include <iostream>
using namespace std;
int a = 10;
int main()
{
    int a = 15;
    {
        int a = 87;
        cout << a << endl;
    }
    cout << a << endl;
    cout << ::a << endl; // :: is scope resolution
    return 0;
}