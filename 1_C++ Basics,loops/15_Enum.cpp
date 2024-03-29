#include <iostream>
using namespace std;
enum day
{
    mon = 1,
    tue,
    wed = 7,
    thu,
    fri = 12,
    sat,
    sun
};
int main()
{
    day d;
    d = mon;

    cout << sun << endl;
    return 0;
}
