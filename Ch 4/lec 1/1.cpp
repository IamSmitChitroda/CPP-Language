#include <iostream>
using namespace std;

class FirstClass
{
public:
    int a, b, c;
};

class SecondClass : public FirstClass
{
public:
    void Setter()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }

    void getter()
    {
        cout << "A : " << a << endl
             << "B : " << b << endl
             << "c : " << c << endl
             << "Sum : " << a + b + c;
    }
};

int main()
{
    SecondClass obj;
    obj.Setter();
    obj.getter();

    return 0;
}
