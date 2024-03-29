#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Akash";

    cout << str.length() << endl;

    cout << str.capacity() << endl;

    str.resize(33);
    cout << str.capacity() << endl;

    cout << str.max_size() << endl;

    str.clear();
    cout << str;

    if (str.empty())
        cout << "String is empty" << endl;
    else
        cout << "string is " << str << endl;

    return 0;
}