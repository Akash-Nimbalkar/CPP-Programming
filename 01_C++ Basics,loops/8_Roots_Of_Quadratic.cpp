#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, root_1, root_2;
    cout << "Enter the values of a,b and c" << endl;
    cin >> a >> b >> c;
    root_1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root_2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "The roots of quadratic equation are " << root_1 << " " << root_2;
    return 0;
}