#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, complex &c);
    friend istream &operator>>(istream &, complex &);
};

ostream &operator<<(ostream &out, complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}
istream &operator>>(istream &in, complex &obj)
{
    cout << "Enter the real part: ";
    in >> obj.real;
    cout << "Enter the imaginary part: ";
    in >> obj.img;
    return in;
}

int main()
{
    complex c(9, 7);
    cout << c;
    operator<<(cout, c);

    return 0;
}