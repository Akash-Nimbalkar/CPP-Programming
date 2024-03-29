#include <iostream>
using namespace std;
class Student
{
protected:
    int roll = 6;

public:
    void putRoll()
    {
        cout << "Roll No. : " << roll << endl;
    }
};
class Test : public Student
{
protected:
    int m1 = 100, m2 = 92;

public:
    void putMarks()
    {
        cout << "Marks in Subject 1 :" << m1 << endl;
        cout << "Marks in Subject 2 :" << m2 << endl;
    }
};
class Result : public Test
{
private:
    float percent = (m1 + m2) / 2;

public:
    void display()
    {
        putRoll();
        putMarks();
        cout << "Percentage = " << percent << "%" << endl;
    }
};
int main()
{
    Result r;
    r.display();
    return 0;
}