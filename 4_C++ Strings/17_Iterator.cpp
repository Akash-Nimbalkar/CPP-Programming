#include <iostream>
using namespace std;

int main()
{
    string str = "rscoe";
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        *it = *it - 32;
    }
    cout << str;
    return 0;
}