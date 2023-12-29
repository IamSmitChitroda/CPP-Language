// Give an example which shows Exception handling of division by zero exception
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string msj = "ERROR";
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    try
    {
        if (b != 0)
            cout << a << " / " << b << " = " << a / b;
        else
            throw msj;
    }
    catch (string s)
    {
        cout << s;
    }

    return 0;
}
