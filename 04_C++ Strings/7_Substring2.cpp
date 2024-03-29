#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming";
    cout << strchr(s1, 'g') << endl; // To find occurence of given letter in string and print all char after that
    cout << strrchr(s1, 'g');        // To find occurence......but from right side
    return 0;
}