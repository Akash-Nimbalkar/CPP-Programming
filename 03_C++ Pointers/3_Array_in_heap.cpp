#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter no. of elements" << endl;
    cin >> size;

    int *p = new int[size];

    cout << "Enter new size";
    cin >> size;
    p = new int[size];
}