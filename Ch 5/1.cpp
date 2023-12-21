#include <iostream>
using namespace std;

class Clculator
{

public:
    void method(int a, int b)
    {
        cout << "Division: " << (a / b) << endl;
    }

    void method(int a, int b, int c)
    {
        cout << "Substraction: " << (a - b - c) << endl;
    }

    void method(int a, int b, int c, int d)
    {
        cout << "Multiplication: " << (a * b * c * d) << endl;
    }

    void method(int a, int b, int c, int d, int e)
    {
        cout << "Addition: " << (a + b + c + d + e) << endl;
    }
};

main()
{
    Clculator o1;

    o1.method(11, 22);
    o1.method(11, 22, 33);
    o1.method(11, 22, 33, 44);
    o1.method(11, 22, 33, 44, 55);
}