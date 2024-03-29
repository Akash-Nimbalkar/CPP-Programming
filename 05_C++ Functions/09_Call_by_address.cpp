#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 14, y = 32;
    swap(&x, &y);
    cout << "After Swapping " << x << " " << y << endl;

    return 0;
}