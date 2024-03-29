#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) // Mutator
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    int getLength() // Accesor
    {
        return length;
    }
    void setBreadth(int b) // Mutator
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    int getBreadth() // Accesor
    {
        return breadth;
    }
};
int main()
{
    Rectangle r;
    r.setLength(9);
    r.setBreadth(-5);

    cout << "Area is " << r.area() << endl;

    cout << "Perimeter is " << r.perimeter();

    return 0;
}