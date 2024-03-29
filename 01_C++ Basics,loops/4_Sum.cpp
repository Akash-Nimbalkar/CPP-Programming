#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    c = a + b;
    cout << "Sum is " << c << endl;

    sum += sum + 10;
    cout << "Sum is " << sum << endl;
    return 0;
}