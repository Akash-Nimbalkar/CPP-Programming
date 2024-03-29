#include <iostream>
using namespace std;

int main()
{

    int A[7] = {4, 8, 6, 9, 5, 20, 7};
    int n = 7, max = A[0];

    for (int i = 1; i < 7; i++)
    {

        if (A[i] > max)
        {
            max = A[i];
        }
    }

    cout << "Max. element in an array is " << max;

    return 0;
}