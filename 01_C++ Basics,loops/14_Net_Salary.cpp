#include <iostream>
using namespace std;
int main()
{
    float basic, percentAllow, percentDeduct, netSalary;
    cout << " Enter basic salary, Percentage of allowance, Percentage of deduction" << endl;
    cin >> basic >> percentAllow >> percentDeduct >> netSalary;
    netSalary = basic + (basic * percentAllow / 100) - (basic * percentDeduct / 100);
    cout << "Net Salary is: " << netSalary << endl;
    return 0;
}