#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter day no. between 1-7" << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Mon";
        break;

    case 2:
        cout << "Tue";
        break;

    case 3:
        cout << "Wed";
        break;

    case 4:
        cout << "Thur";
        break;

    case 5:
        cout << "Fri";
        break;

    case 6:
        cout << "Sat";
        break;

    case 7:
        cout << "Sun";
        break;

    default:
        cout << "INVALID day";
        }
    return 0;
}