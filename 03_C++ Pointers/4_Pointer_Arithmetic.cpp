#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *ptr = A;
    cout << ptr << endl;
    cout << *ptr;
    return 0;
}