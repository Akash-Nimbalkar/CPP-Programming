#include <iostream>
using namespace std;

int main()
{
    string str = "WeLcOMe5@";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        cout << str[i];
    }
    return 0;
}