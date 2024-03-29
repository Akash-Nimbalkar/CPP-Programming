#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;
    return ifs;
}

int main()
{
    ifstream ifs("Student.txt");
    Student s1, s2, s3;
    ifs >> s1;
    cout << s1.name << " " << s1.roll << " " << s1.branch << endl;
    
    ifs>>s2;
    cout << s2.name << " " << s2.roll << " " << s2.branch << endl;

    ifs.close();
    return 0;
}