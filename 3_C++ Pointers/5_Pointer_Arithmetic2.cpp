#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;
    for (int i = 0; i < 5; i++)
    {
        // cout << A[i] << endl;
        // cout << *(A + i) << endl; print array elements
        // cout << i[A] << endl; print array elements
        // cout << A+i <<endl; print all addresses
        // cout << p + i << endl; print all addresses
        cout << p[i] << endl;
    }
    return 0;
}