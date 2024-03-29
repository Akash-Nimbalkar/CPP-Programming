#include <iostream>
using namespace std;

void fun()
{
    static int v = 0; /* Static variable is just like global variable
                      but LIMITED to one function & remain in code section always*/
    int a = 5;
    v++;
    cout << a << " " << v << endl;
}
int main()
{
    fun();
    fun();
    fun();

    return 0;
}