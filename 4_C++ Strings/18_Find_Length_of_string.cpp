#include <iostream>
using namespace std;

int main()
{
    string str = "AkashYN";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        count++;
    }
    cout << "The length of string is " << count << endl;
    return 0;
}