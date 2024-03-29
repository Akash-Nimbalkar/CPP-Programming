#include <iostream>
using namespace std;
class unary
{
private:
    int a, b;

public:
    unary()
    {
        a = -15;
        b = 20;
    }
    void display()
    {
        cout << "a = " << a << endl;

        cout << "b = " << b << endl;
    }
    void operator-();
};
void unary ::operator-()
{
    a = -a;
    b = -b;
}

int main()
{
    unary u;
    u.display();
    -u;
    u.display();

    return 0;
}