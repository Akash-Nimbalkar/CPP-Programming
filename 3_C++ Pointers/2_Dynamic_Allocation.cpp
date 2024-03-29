#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    p[2] = 10;
    p[0] = 7;

    cout << p[2] << endl;
    delete[] p;

    p = nullptr;

    return 0;
}