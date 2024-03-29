#include <iostream>
using namespace std;

int main()
{
    int A[5] = {11, 4, 6, 9, 14};
    int *p = A;
    // cout << p << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl;
        p++;
    }
    // cout << p << endl;

    return 0;
}