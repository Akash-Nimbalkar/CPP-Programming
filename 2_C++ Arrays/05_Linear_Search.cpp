#include <iostream>
using namespace std;

int main()
{
    int A[10], n = 10, key;
    cout << "Enter numbers";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i]; // To take elements of array from user
    }
    cout << "Enter Key";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "Key found at " << i << endl;
            return 0;
        }
    }
    cout << "Key not found";

    return 0;
}