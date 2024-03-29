#include <iostream>
using namespace std;

int main()
{
    string str = "akashnimbalkar1333@gmail.com";

    // for (int i = 0; str[i] != '\0'; i++) // To find username
    // {
    //     if (str[i] == '@')
    //     {
    //         break;
    //     }
    //     cout << str[i];
    // }

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if ((str[i] >= 65 && str[i] <= 90))
    //         ;
    // }
    cout << endl;
    // Loogic 2
    int i = str.find('@');
    string uname = str.substr(0, i);
    for (int i = 0; uname[i] != '\0'; i++)
    {
        if ((uname[i] >= 65 && uname[i] <= 90) || (uname[i] >= 97 && uname[i] <= 122) || (uname[i] >= 48 && uname[i] <= 57) ||
            uname[i] == 242 || uname[i] == 46)
            cout << "Valid Email addess" << endl;
        else
            cout << "Invalid email address!!" << endl;
    }
    return 0;
}