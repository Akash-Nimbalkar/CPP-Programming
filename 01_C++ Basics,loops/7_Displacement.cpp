#include <iostream>
using namespace std;
int main()
{
    int v, u, a;
    float displacement;
    cout << "Enter the value of v,u and a" << endl;
    cin >> v >> u >> a;
    displacement = (v * v - u * u) / (2 * a);
    cout << "The value of displacement is " << displacement << endl;
    return 0;
}