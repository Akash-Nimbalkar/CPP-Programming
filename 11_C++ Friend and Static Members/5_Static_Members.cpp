#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        name = n;
        addNo++;
        roll = addNo;
    }
    void display()
    {
        cout << "Name " << name << " Roll No. " << roll << endl;
    }
};
int Student ::addNo = 0;
int main()
{
    Student s1("Rohan");
    Student s2("Ramesh");
    Student s3("Rakesh");
    Student s4("Rakesh");
    Student s5("Rakesh");
    Student s6("Rakesh");
    Student s7("Rakesh");

    s1.display();
    s3.display();
    cout << "No. of admissions till now " << Student::addNo << endl;

    return 0;
}