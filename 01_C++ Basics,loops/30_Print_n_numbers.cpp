#include <iostream>
using namespace std;

int main() // NEW Type of program
{
    int i = 0;
    for (;;)
    {
        cout << i << "Hello" << endl;
        i++;
        if (i > 20)
            break;
    }
    return 0;
}