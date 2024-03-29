#include <iostream>
using namespace std;
class Base1
{
protected:
    int a;

public:
    void get_a(int v)
    {
        a = v;
    }
};
class Base2
{
protected:
    int b;

public:
    void get_b(int v)
    {
        b = v;
    }
};
class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "The Sum of a and b is " << a + b << endl;
    }
};
int main()
{
    Derived d;
    d.get_a(10);
    d.get_b(20);
    d.display();

    return 0;
}