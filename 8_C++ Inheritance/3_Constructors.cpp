#include <iostream>
using namespace std;
class Base
{
public:
    Base() { cout << "Default of base" << endl; }
    Base(int x) { cout << "Param of base " << x << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Default of derived" << endl; }
    Derived(int y) { cout << "Param of derived " << y << endl; }
    Derived(int x, int y) : Base(x) // To call parameterized constructor of base
    {
        cout << "Param of derived " << y << endl;
    }
};
int main()
{

    Derived d(10, 23);

    return 0;
}