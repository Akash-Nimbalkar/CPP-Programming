#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part" << endl;
    in >> c.real;
    cout << "Enter imaginary part" << endl;
    in >> c.img;
    return in;
}

int main()
{
    Complex C1;
    cin >> C1;

    Complex C2, C3;
    cin >> C2;
    C3 = C1 + C2;
    cout << C3;

    return 0;
}