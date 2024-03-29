#include <iostream>
using namespace std;
class stackOverFlow : exception
{
};
class stackUnderFlow : exception
{
};
class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int x)
    {
        try
        {
            if (top == size - 1)
                throw stackOverFlow();
            top++;
            stk[top] = x;
        }
        catch (stackUnderFlow())
        {
            cout << "Underflow" << endl;
        }
    }
    int pop()
    {
        try
        {
            if (top == -1)
                throw stackUnderFlow();
        }
        catch (stackOverFlow())
        {
            cout << "Overflow" << endl;
        }
        return stk[top--];
    }
};

int main()
{
    Stack s(5);

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(88);
    return 0;
}