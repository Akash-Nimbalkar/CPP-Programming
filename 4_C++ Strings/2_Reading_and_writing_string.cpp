#include <iostream>
using namespace std;

int main()
{
    char s[20];
    cout << "Enter your name ";
    cin.getline(s, 20);
    cout << "Welcome " << s;

    char s2[20];
    cout << "Enter your name ";
    cin.getline(s2, 20);
    cout << "Welcome " << s2;

    return 0;
}