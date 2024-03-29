#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs("Info.txt", ios::trunc);
    ofs << "AKASH" << endl;
    ofs << 06 << endl;
    ofs.close();
    return 0;
}
