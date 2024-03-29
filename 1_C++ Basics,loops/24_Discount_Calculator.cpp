#include <iostream>
using namespace std;

int main()
{
    float amount, disAmount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    if (amount >= 5000)
    {
        disAmount = amount - amount * 0.2;
        cout << "The discounted bill amount is " << disAmount;
    }
    else if (amount >= 2000 && amount < 5000)
    {
        disAmount = amount - amount * 0.1;
        cout << "The discounted bill amount is " << disAmount;
    }

    else
    {
        disAmount = amount - amount * 0.05;
        cout << "The discounted bill amount is " << disAmount;
    }
    return 0;
}