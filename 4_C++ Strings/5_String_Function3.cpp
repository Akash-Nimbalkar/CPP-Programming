#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Morning";
    char s2[10] = " ";

    strcpy(s2, s1); // To copy one string into destination string

    cout << s2 << endl;
    return 0;
}