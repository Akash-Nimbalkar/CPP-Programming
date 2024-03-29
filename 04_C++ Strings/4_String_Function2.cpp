#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Good";
    char s2[10] = "Morning";

    strncat(s1, s2, 12); // To Concatenate one string into another //third parameter is how many letters you want to concatente

    // cin.ignore();  To ignore previous string

    cout << s1 << endl;

    return 0;
}