#include <iostream>
using namespace std;
class Unary
{
private:
    int u;

public:
    Unary(int a)
    {
        u = a;
    }
    void operator-()
    {
        u = -u;
    }
    void show()
    {
        cout << u << endl;
    }
};
int main()
{
    Unary u(12);
    u.show();
    -u;
    u.show();
    return 0;
}