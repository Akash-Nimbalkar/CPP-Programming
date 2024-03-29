#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b - 20;
        c = 30;
    }
};

class Child : public Parent
{
public:
    void funChild()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};
class Grandchild : public Child
{
public:
    void funGrandchild()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};
int main()
{
    Child c;
    c.a = 10;
    c.b = 20;
    c.c = 30;

    return 0;
}