
#include <iostream>
using namespace std;

class A
{
public:
    int km, m; // All attributes
};

class B : public A
{
public:
    void setdata() // setter for Input
    {
        cout << "Enter kilometer : ";
        cin >> km;
        cout << "Enter meter : ";
        cin >> m;
    }

    B operator+(B o2)
    {
        B tmp;
        tmp.km = 0;
        tmp.m = 0;

        tmp.km = this->km + o2.km;
        tmp.m = this->m + o2.m;

        while (tmp.m >= 1000)
        {
            tmp.m -= 1000;
            tmp.km++;
        }

        return tmp;
    }
};

int main()
{
    B o1, o2, o3;

    cout << "Input-1" << endl;
    o1.setdata();
    cout << "Input-2" << endl;
    o2.setdata();

    o3 = o1 + o2; // o3 = o1.operator+ (B o2)

    cout << endl
         << "Total kilometer: " << o3.km << endl
         << "Total meter: " << o3.m;

    return 0;
}