#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of base " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of derived" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    d.a = 500;
    // b.display();
    d.display();
    d.show();

    return 0;
}