#include <iostream>
using namespace std;

template <class T1, class T2>

class Test
{
private:
    T1 x;
    T2 y;

public:
    Test(T1 a, T2 b)
    {
        x = a;
        y = b;
    }
    void Show()
    {
        cout << x << " and " << y << endl;
    }
};
int main()
{
    Test<float, int> obj1(2.45, 100);
    Test<int, char> obj2(16, 'm');
    obj1.Show();
    obj2.Show();

    return 0;
}