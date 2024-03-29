#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
float add(float x, float y)
{
    return x + y;
}
int main()
{
    int a = 20, b = 10, c, d;
    c = add(a, b);
    d = add(a, b, c);
    cout << c << " " << d << endl;
    float x = 5.5, y = 7.6, z;
    z = add(x, y);
    cout << z << endl;
    return 0;
}