#include <iostream>
using namespace std;
int maxim(int x, int y)
{
    return x > y ? x : y;
}
int minim(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int (*fp)(int, int); // same like signature of function
    fp = maxim;
    (*fp)(10, 50);

    fp = minim;
    (*fp)(10, 50);

    return 0;
}