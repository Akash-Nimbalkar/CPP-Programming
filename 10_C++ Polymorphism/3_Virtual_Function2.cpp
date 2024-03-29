#include <iostream>
using namespace std;
class BasicCar
{
public:
    virtual void start()
    {
        cout << "BasicCar has started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout << "AdvanceCar has started" << endl;
    }
};
int main()
{
    AdvanceCar a;
    BasicCar *ptr = &a; // Instead of &a we can also wite *new AdvanceCar()*
    ptr->start();

    return 0;
}