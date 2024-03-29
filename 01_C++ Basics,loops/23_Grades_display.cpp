#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float avg;
    cout << "Enter the marks in three subjects" << endl;
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = total / 3.0;

    if (avg >= 60)
    {
        cout << "A Grade!";
    }
    else if (avg >= 35 && avg < 60)
    {
        cout << "B Grade!";
    }
    else
    {
        cout << "C Grade!";
    }

    return 0;
}