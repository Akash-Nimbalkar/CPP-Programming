#include <iostream>
using namespace std;

int main()
{
    int min;
    int B[9] = {4, 9, 7, 2, 6, 0, -8, 9, 1};
    min = B[0];

    for (int i = 1; i < 10; i++)
    {
        if (B[i] < min)
        {
            min = B[i];
        }
    }

    cout << "Minimum Element in an array is " << min;

    return 0;
}