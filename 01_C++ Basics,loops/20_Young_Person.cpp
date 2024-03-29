#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age <= 12 && age >= 50)
    {
        cout << "You are Young";
    }
    else
    {
        cout << "You are not Young";
    }
    return 0;
}