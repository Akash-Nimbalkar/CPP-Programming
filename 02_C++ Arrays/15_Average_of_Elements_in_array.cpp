#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num[50], i, n;
    float sum = 0.0, average;

    cout << "Enter the number of elements in array";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " "
             << "Enter the number :";
        cin >> num[i];
        sum = sum + num[i];
    }
    average = sum / n;
    cout << "Average is " << setprecision(9) << average;

    return 0;
}