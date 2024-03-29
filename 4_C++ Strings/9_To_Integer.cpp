#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "235";
    char s2[20] = "54.78";

    long int x = strtol(s1, NULL, 10); // last parameter is base of number system
    float y = strtof(s2, NULL);

    cout << x << endl;
    cout << y << endl;
    return 0;
}