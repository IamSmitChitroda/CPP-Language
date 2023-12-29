// Write a Program to handle ambuigity error in Hybrid inheritance
#include <iostream>
using namespace std;

class A
{
public:
    virtual void a()
    {
        cout << "Class A" << endl;
    }
};

class B : public virtual A
{
public:
    void b()
    {
        cout << "class B" << endl;
    }
};

class C : public virtual A
{
public:
    void c()
    {
        cout << "Class C" << endl;
    }
};

class D : public B, public C
{
public:
    void d()
    {
        cout << "Class D" << endl;
    }
};

int main()
{
    D obj;

    obj.a();
    obj.b();
    obj.c();
    obj.d();

    return 0;
}
