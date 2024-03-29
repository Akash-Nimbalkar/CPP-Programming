#include <iostream>
using namespace std;

int main()
{
    string str = "How are you";
    cout << str.find("are") << endl;
    cout << str.find('o') << endl;
    cout << str.rfind('o') << endl;
    cout << str.find_first_of('o') << endl;
    cout << str.find_last_of('o') << endl;

    return 0;
}