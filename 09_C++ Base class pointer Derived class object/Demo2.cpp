#include <iostream>
using namespace std;
class Rectangle
{
public:
    void area()
    {
        cout << "Area of rectangle" << endl;
    }
};
class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout << "Volume of cuboid" << endl;
    }
};
int main()
{
    Cuboid c;
    Rectangle *ptr = &c;
    ptr->area();
    ptr->volume();
    return 0;
}