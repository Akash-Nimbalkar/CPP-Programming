#include <iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    float a = 7.12, b = 4.15;
    cout << "Before swapping : " << a << " " << b << endl;
    Swap(a, b);
    cout << "After swapping : " << a << " " << b << endl;

    return 0;
}