#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int phymark;
    int chemmark;
    int mathmark;

public:
    void setData(int r, string naam, int p, int c, int m)
    {
        roll = r;
        name = naam;
        phymark = p;
        chemmark = c;
        mathmark = m;
    }
    int total()
    {
        return phymark + chemmark + mathmark;
    }

    char grade()
    {
        int avg = total() / 3;
        if (avg >= 60)
            return 'A';
        else if (avg > 40 && avg < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};
int main()
{
    int r, p, c, m;
    string naam;
    cout << "Enter roll no & name" << endl;
    cin >> r >> naam;
    student s;
    cout << "Enter marks in PCM" << endl;
    cin >> p >> c >> m;
    s.setData(r, naam, p, c, m);
    cout << "Total marks of are " << s.total() << endl;
    cout << "Grade is " << s.grade() << endl;

    return 0;
}