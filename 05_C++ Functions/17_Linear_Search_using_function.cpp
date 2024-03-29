#include <iostream>
using namespace std;
int search(int A[], int n, int key = 0)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
        else
        {
            return -1;
        }

        // return 0;
    }
}
int main()
{
    int B[] = {2, 56, 76, 89, 90, 43, 12}, key;
    cout << "Enter an element to search" << endl;
    cin >> key;
    int index = search(B, 7, key);
    cout << "Element found at index " << index << endl;
    return 0;
}