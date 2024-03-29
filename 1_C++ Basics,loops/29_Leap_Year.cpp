#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year" << endl;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    switch (10 & 6)

    {

    case 1:
        cout << "One  ";

    case 2:
        cout << "Two ";

    case 3:
        cout << "Three ";
    }

    return 0;
}