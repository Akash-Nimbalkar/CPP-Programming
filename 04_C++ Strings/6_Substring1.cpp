#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "programming";
    char s2[10] = "gram";

    if (strstr(s1, s2) != NULL)
        cout << strstr(s1, s2) << endl; // It prints all character after given string
    else
        cout << "Not Found" << endl;

    return 0;
}