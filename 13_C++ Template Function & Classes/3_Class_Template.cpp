#include <iostream>
using namespace std;

template <class T>

class Array
{
private:
    T arr[5];
    T result;

public:
    void getElements()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void getAddition()
    {
        T Sum = 0;
        for (int i = 0; i < 5; i++)
        {
            Sum = Sum + arr[i];
        }
        cout << "Sum = " << Sum << endl;
    }
};
int main()
{
    Array<int> a1;
    Array<float> a2;

    cout << "Enter int values ";
    a1.getElements();
    a1.getAddition();

    cout << "Enter float values ";
    a2.getElements();
    a2.getAddition();

    return 0;
}
