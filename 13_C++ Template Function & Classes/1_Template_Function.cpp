#include <iostream>
using namespace std;
template <class T>

T Max(T a, T b) // try using max as a function name
{
    return a > b ? a : b;
}

int main()
{
    int c = Max(10, 157);
    cout << c << endl;
    float d = Max(133.5f, 12.5f);
    cout << d << endl;
    char ch = Max('a', 'z');
    cout << ch << endl;

    return 0;
}