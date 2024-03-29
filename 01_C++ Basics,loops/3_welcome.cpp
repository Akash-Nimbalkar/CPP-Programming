#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "May I Know your name\n";
    getline(cin, name);
    cout << "Welcome " << name;
    return 0;
}
