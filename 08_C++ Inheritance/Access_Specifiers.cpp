#include <iostream>
using namespace std;
class A
{
private:
    int x = 2;

protected:
    int y = 3;

public:
    int z = 5;

    void Show_A()
    {
        cout << x << y << z << endl;
    }
};
class B : public A
{
public:
    void getSquare()
    {
        cout << "Square of x is " << x * x << endl;
        cout << "Square of y is " << y * y << endl;
        cout << "Square of z is " << z * z << endl;
    }
};
class C : protected A
{
public:
    void getCube()
    {
        cout << "Cube of x is " << x * x * x << endl;
        cout << "Cube of x is " << y * y * y << endl;
        cout << "Cube of x is " << z * z * z << endl;
    }
};
int main()
{
    A a;
    B b;
    b.getSquare();
    C c;
    c.getCube();

    return 0;
}