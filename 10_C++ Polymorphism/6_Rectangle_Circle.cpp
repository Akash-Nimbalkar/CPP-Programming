#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l = 1, float b = 1)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
class Circle
{
private:
    float radius;

public:
    Circle(float r = 1)
    {
        radius = r;
    }
    float area()
    {
        return 3.142 * radius * radius;
    }
    float perimeter()
    {
        return 2 * 3.142 * radius;
    }
};
int main()
{
    Shape *s = new Rectangle(5.5, 20);
    cout << "Area of rectangle is " << s->area() << endl;
    cout << "Perimeter of rectangle is " << s->perimeter() << endl;

    Circle c(5.2);
    cout << "Area of Circle is " << c.area() << endl;
    cout << "Perimeter of Circle is " << c.perimeter() << endl;
    return 0;
}