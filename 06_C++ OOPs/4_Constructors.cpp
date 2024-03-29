#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default constructor is provided by the compiler.
    Rectangle() // Non-parameterized Constructor
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l = 1, int b = 1) // parameterized default argument constructor
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r) // copy constructor
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l) // Mutator
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 1;
        }
    }

    void setBreadth(int b) // Mutator
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 1;
        }
    }
    int getLength() // Accessor
    {
        return length;
    }
    int getBreadth() // Accessor
    {
        return breadth;
    }

    int area() // Fecilitator
    {
        return length * breadth;
    }
    int perimeter() // Fecilitator
    {
        return 2 * (length + breadth);
    }
    bool isSquare() // Inspector or Enquiry
    {
        if (length == breadth)
        {
            return 1;
        }
        if (length != breadth)
        {
            return 0;
        }
    }
    ~Rectangle(); // Destructor
};
int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    cout << r1.area() << endl;

    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;

    return 0;
}