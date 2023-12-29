// Write a Program which illustrates Method Overriding by using two classes.
#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Hello world" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "Hello c++ " << endl;
    }
};

int main()
{
    B o1;

    o1.print();

    return 0;
}