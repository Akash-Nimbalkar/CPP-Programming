#include <iostream>
using namespace std;

int main()
{
    int A[3][2] = {{1, 3}, {3, 4}, {4, 0}};
    int B[3][2] = {{-1, 8}, {9, 4}, {5, 2}};
    int C[3][2];

    // For addition run nested for loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // To display C matrix run nested for loop

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}