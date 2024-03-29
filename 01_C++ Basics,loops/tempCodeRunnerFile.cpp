#include <iostream>
using namespace std;
class Number
{
private:
    double num1;
    double num2;
    int n;

public:
    Number(double n1, double n2, int num)
    {
        num1 = n1;
        num2 = n2;
        num = n;
    }
    inline double mult()
    {