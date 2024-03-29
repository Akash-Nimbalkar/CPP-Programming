#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20] = "x=20;y=12;z=34";
    char *token = strtok(s, "/");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "/");
    }
    return 0;
}