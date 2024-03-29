#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    bool isSquare();
    int area();
    int perimeter();
    ~Rectangle();
};
int main()
{
    Rectangle r(10, 10);
    cout << r.area() << endl;
    if (r.isSquare())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
// datatype className :: functionName
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle ::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle ::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle ::setLength(int l)
{
    length = l;
}
void Rectangle ::setBreadth(int b)
{
    breadth = b;
}
bool Rectangle ::isSquare()
{
    return length == breadth;
}
int Rectangle ::area()
{
    return length * breadth;
}
int Rectangle ::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle ::~Rectangle()
{
    cout << "Rectangle is destroyed!!" << endl;
}