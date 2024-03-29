#include <iostream>
using namespace std;

int main()
{
    int A[2][3];
    // for each loop to take values of array
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }
    // foe each loop to show values of array
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}