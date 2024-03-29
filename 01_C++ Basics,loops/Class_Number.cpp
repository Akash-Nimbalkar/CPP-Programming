#include <iostream>
using namespace std;
class Number
{
private:
    double num1;
    double num2;
    int n;

public:
    inline double mult(double a, double b)
    {
        return num1 * num2;
    }

    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    Number n;
    double a, b;
    int c;
    cout << "Enter two double numbers" << endl;
    cin >> a >> b;
    cout << "Enter one integer number" << endl;
    cin >> c;

    double ans = n.mult(a, b);
    cout << ans << endl;
    cout << n.cube(c) << endl;

    return 0;
}