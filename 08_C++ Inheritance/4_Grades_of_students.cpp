#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int roll;

public:
    void getData()
    {
        cout << "Enter name & roll number of a student " << endl;
        cin >> name >> roll;
    }
};
class Exam : public Student
{
protected:
    int m1, m2, m3, m4, m5;

    // public:
    void getMarks()
    {
        cout << "Enter marks of 5 Subjects " << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
};

class Result : public Exam
{
protected:
    float total;
    char grade;

public:
    void getGrade()
    {
        total = (m1 + m2 + m3 + m4 + m5) / 5;
        if (total >= 90 && total <= 100)
        {
            cout << "O Grade(Outstanding)" << endl;
        }
        else if (total >= 80 && total <= 89)
        {
            cout << "A+ Grade" << endl;
        }
        else if (total >= 70 && total <= 79)
        {
            cout << "A Grade" << endl;
        }
        if (total >= 40 && total <= 69)
        {
            cout << "B Grade" << endl;
        }
        else
        {
            cout << "You got F grade" << endl;
        }
    }
};
int main()
{
    Result r;
    r.getData();
    r.getMarks();
    r.getGrade();

    return 0;
}