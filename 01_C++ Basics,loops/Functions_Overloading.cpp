#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(float x, float y)
{
    return x + y;
}
int main()
{
    int a = 20, b = 10, c = 15;
    float d = 2.2, e = 4.5;

    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;
    cout << sum(d, e) << endl;

    return 0;
}