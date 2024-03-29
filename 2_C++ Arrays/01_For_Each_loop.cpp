#include <iostream>
using namespace std;

int main()
{
    int i = 3.6;
    int A[] = {1, 2, 3, 4, 5, 67, 7, 9};

    for (auto &x : A)
    {
        cout << x << endl;
    }

    return 0;
}