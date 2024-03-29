#include <iostream>
using namespace std;
class User
{
private:
    int age;
    int income;
    string city;
    bool has4wheeler;

public:
    User(int a, int i, string cty, bool has4)
    {
        age = a;
        income = i;
        city = cty;
        has4wheeler = has4;
    }
    int getAge()
    {
        return age;
    }
    int getIncome()
    {
        return income;
    }
    string getCity()
    {
        return city;
    }
    bool getcar()
    {
        return has4wheeler;
    }
};
int main()
{
    User u(19, 100000, "Pune", 0);
    try
    {
        if (u.getAge() >= 18 && u.getAge() <= 25 && u.getIncome() >= 50000 && u.getIncome() <= 100000 && (u.getCity() == "Pune" || u.getCity() == "Mumbai" || u.getCity() == "Bangalore" || u.getCity() == "Chennai") && (u.getcar() == 1 || u.getcar() == 0))
        {
            cout << "\n User has no exception !! Good to go" << endl
                 << endl;
        }
        else
        {
            throw 101;
        }
    }
    catch (int e)
    {
        cout << "\nUser has met with exception with error code " << e << endl;
    }

    return 0;
}