#include <iostream>
using namespace std;

int main()
{
    int A[2][4] = {{1, 4, 8, 7}, {2, 7, 6, 5}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}