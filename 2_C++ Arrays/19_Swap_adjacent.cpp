#include <iostream>
using namespace std;

int main()
{
    int even[8] = {5, 8, 9, 7, 6, 4, 1, 2};
    int odd[5] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 8; i += 2)
    {
        if (i + 1 < 8)
            swap(even[i], even[i + 1]);
    }

    for (int i = 0; i < 8; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i += 2)
    {
        if (i + 1 < 5)
            swap(odd[i], odd[i + 1]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << odd[i] << " ";
    }
    return 0;
}