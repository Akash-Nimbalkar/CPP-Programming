#include <iostream>
using namespace std;
int main()
{
    int x = 11, y = 5, z;
    z = x & y;
    cout << "Z is " << z << endl;
    z = x | y;
    cout << "Z is " << z << endl;
    z = x ^ y;
    cout << "Z is " << z << endl;
    z = ~x;
    cout << "Z is " << z << endl;
    z = x << 2;
    cout << "Z is " << z << endl;
    z = x >> 2;
    cout << "Z is " << z << endl;
    return 0;
}