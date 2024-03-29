#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter n" << endl;
    cin >> n;
    int arr[40];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of elements in array is " << sum << endl;
    return 0;
}