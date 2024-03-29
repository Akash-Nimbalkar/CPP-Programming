#include <iostream>
using namespace std;
class MyException : public exception
{
};

int division(int a, int b)
{
    if (b == 0)
        throw MyException();
    return a / b;
}

int main()
{
    int a = 10, b = 0, c;
    try
    {

        c = division(a, b);
        cout << c << endl;
    }
    catch (MyException e)
    {
        cout << "Division by Zero"
             << " Error Code " << endl;
    }
    cout << "Bye" << endl;
    return 0;
}