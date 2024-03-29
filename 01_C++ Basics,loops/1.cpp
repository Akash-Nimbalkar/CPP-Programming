#include <iostream>
using namespace std;

int search(int b[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i] == key)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int arr[] = {2, 56, 76, 89, 90, 43, 12};
    int key;
    cout << "Enter the element for search" << endl;
    cin >> key;
    cout << search(arr, 7, key);
    return 0;
}