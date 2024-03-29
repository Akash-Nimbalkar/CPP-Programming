#include <iostream>
using namespace std;
class BasicCar
{
public:
    void start()
    {
        cout << "Car Started!" << endl;
    }
};
class AdvanceCar : public BasicCar
{
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};
int main()
{
    AdvanceCar a;
    BasicCar *ptr = &a;
    ptr->start();
    ptr->playMusic();

    return 0;
}