#include <iostream>
using namespace std;

int main()
{
    string b = "Programming";
    string c = "programming";
    string str1 = "Hello";
    string str2 = " world";
    cout << b.substr(3, 6) << endl;
    cout << b.compare(c) << endl;
    cout << b.at(4) << endl;
    str1 = str1 + str2;
    cout << str1 << endl;
    str1 = str2;
    cout << str1 << str2 << endl;
    return 0;
}