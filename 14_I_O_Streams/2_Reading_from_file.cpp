#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("Info.txt");
    if (!ifs)
        cout << "File cannot be opened ";
    string name;
    int roll;
    string branch;
    ifs >> name >> roll >> branch;
    ifs.close();
    cout << name << " " << roll << " " << branch << endl;
    if (ifs.eof())
    {
        cout << "EOF reached!\n";
    }

    return 0;
}