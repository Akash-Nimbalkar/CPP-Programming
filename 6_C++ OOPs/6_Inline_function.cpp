#include <iostream>
using namespace std;
class test
{
public:
    void fun1() // Inline function
    {
        cout << "Inline" << endl;
    }
    void fun2();
    inline void fun3();
};
int main()
{

    return 0;
}
void test ::fun2() // Non-inline function
{
    cout << "Non-Inline" << endl;
}
void test ::fun3()
{
    cout << "Inline function as inline is writtem" << endl;
}
