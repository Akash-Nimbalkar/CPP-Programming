#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area() { return length * breadth; }
};
int main()
{
    Rectangle r1(9, 8);
    cout << r1.area() << endl;

    return 0;
}