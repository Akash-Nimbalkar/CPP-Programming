#include <iostream>
using namespace std;

int main()
{
    int a[6] = {7, 9, 4, 0, 6, 3};
    int *p = &a[5], *q = &a[2];
    cout << q - p;
    return 0;
}