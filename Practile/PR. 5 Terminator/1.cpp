#include <iostream>
using namespace std;

class A
{
    int a, b;
    string msj = "Can't_devided_by_ZERO";

public:
    A()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;

        try
        {
            if (a == b)
                throw 1.01;

            else if (b != 0)
                throw a / b;

            else
                throw msj;
        }
        catch (int a)
        {
            cout << "Ans : " << a << endl;
        }
        catch (string a)
        {
            cout << a << endl;
        }
        catch (...)
        {
            cout << "Both are same.So, ans : 1.";
        }
    }
};

int main()
{
    A o;

    return 0;
}