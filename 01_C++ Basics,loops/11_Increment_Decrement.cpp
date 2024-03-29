#include <iostream>
using namespace std;

int main()
{
    int i = 5, j;
    j = 2 * i++ + 2 * ++i; // 2*6 + 2*7 // 12+14 //26
    // 2 * 6+ 2* 6 // 12 + 12 // 24
    cout << i << " " << j << endl;

    return 0;
}