#include <iostream>
using namespace std;
template <class T>
class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        size = new int[size];
    }
    void push(T x);
    T pop();
};
template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T Stack<T>::pop()
{
    int m = 0;
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        m = stk[top];
        top--;
    }
    return m;
}
int main()
{
    Stack<float> s(5);
    s.push('1.52');
    s.push('1.52');
    s.push('1.52');
    s.push('1.52');
    s.push('1.52');
    s.push('1.52');

    return 0;
}