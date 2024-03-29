#include <iostream>
using namespace std;
class Employee
{
public:
    int salary = 100000;
};

class Programmer : public Employee
{
public:
    float bonus = 5000.50;
};
int main()
{

    Programmer p;
    cout << p.salary << endl;
    cout << p.bonus << endl;
    return 0;
}