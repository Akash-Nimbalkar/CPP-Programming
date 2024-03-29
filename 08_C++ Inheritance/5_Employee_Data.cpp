#include <iostream>
using namespace std;
class Employee
{
private:
    int empid;
    string name;

public:
    Employee(int emp, string n)
    {
        empid = emp;
        name = n;
    }
    int getEmpid() { return empid; }
    string getName() { return name; }
};
class FullEmployee : public Employee
{
private:
    int salary;

public:
    FullEmployee(int emp, string n, int sal) : Employee(emp, n)
    {
        salary = sal;
    }
    int getSalary()
    {
        return salary;
    }
};
class PartEmployee : public Employee
{
private:
    int wage;

public:
    PartEmployee(int emp, string n, int w) : Employee(emp, n)
    {
        wage = w;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    PartEmployee e1(111, "Akash", 3300);
    FullEmployee e2(22, "Smitanshu", 5000);
    cout << "Employee " << e1.getName() << " has wages " << e1.getWage() << endl;
    cout << "Employee " << e2.getName() << " has salary " << e2.getSalary() << endl;

    return 0;
}