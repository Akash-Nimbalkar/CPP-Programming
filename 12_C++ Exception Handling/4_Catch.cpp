#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw "Akash";
    }
    catch (int e)
    {
        cout << "Int Catch" << endl;
    }
    catch (double e)
    {
        cout << "Double catch" << endl;
    }
    catch (...) // called as All Catch / ...-> Ellipse
    {
        cout << "All Catch" << endl;
    }
    return 0;
}