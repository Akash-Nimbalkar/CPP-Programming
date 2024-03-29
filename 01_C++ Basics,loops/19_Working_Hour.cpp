#include <iostream>
using namespace std;

int main()
{
    int hour;
    cout << "Enter hour\n";
    cin >> hour;

    if (hour >= 9 && hour <= 18)
    {
        cout << "This is working hour :(";
    }
    else
    {
        cout << "This is leisure hour :)";
    }
    return 0;
}