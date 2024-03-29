#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int s = 0;
    int e = 6 - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    for (int i = 5; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}