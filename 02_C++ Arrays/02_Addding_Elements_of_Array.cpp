#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    int A[7] = {4,
                9,
                4,
                12,
                3,
                7,
                5};
    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }
    cout << "Sum is " << sum;

    return 0;
}