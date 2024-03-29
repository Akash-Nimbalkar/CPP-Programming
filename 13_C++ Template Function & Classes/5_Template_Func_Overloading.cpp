#include <iostream>
using namespace std;
template <class T>
void Show(T x)
{
    cout << "Template display : " << x << endl;
}
void Show(int x)
{
    cout << "Explicit display : " << x << endl;
}
int main()
{
    Show(5.68f);
    Show(56);
    Show('A');

    return 0;
}