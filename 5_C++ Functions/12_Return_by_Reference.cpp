#include <iostream>
using namespace std;
int &fun(int &x)
{
    return x;
}
int main()
{
    int a = 10;
    fun(a);
    cout << a << endl;
    return 0;
}