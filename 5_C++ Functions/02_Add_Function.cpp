#include <iostream>
using namespace std;

float add(float x, float y) // Prototype or header or signature of function
{
    float z;
    z = x + y;
    return z;
}

int main()
{
    float x = 7.5, y = 6.2, z;
    z = add(x, y);
    cout << z << endl;
    return 0;
}