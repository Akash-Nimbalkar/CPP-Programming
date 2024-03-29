#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";
    string s = "Programming";

    str.append("world");
    cout << str << endl;

    str.insert(3, "kk");
    cout << str << endl;

    s.replace(3, 5, "Zb");
    cout << s << endl;

    s.push_back('M');
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    str.swap(s);
    cout << s << " " << str << endl;

    return 0;
}