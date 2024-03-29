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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void PrintComplex()
    {
        cout << real << "+i" << img << endl;
    }
};
int main()
{
    Complex C1(5, 2);
    Complex C2(8, 2);
    Complex C3;
    C3 = C1 + C2;
    C3.PrintComplex();
    // cout << C3.getReal() << " " << C3.getImg() << endl;

    return 0;
}