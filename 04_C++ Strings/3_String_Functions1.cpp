#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[20];

    cout << "Enter string" << endl;
    cin.getline(s, 20);

    cout << strlen(s) << endl; // To print lenght(no. of characters stored) of string

    return 0;
}