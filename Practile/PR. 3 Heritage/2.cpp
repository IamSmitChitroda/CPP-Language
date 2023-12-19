#include <iostream>
using namespace std;

class Number
{
protected:
    int n;

public:
    void Setter()
    {
        cout << "Enter any number : ";
        cin >> n;
    }
};

class Square : public Number
{
public:
    void Number_of_Square()
    {
        cout << "Square : " << n * n << endl;
    }
};

class Cube : public Number
{
public:
    void Number_of_Cube()
    {
        cout << "Cube : " << n * n * n << endl;
    }
};

int main()
{
    Square o1;
    Cube o2;

    o1.Setter();
    o1.Number_of_Square();

    o1.Setter();
    o2.Number_of_Cube();
}

/*
    Here,

        -> We take input in 1st class and give value to two another class.

        -> That's called Hiracical Inheritance.

        -> Hiracical Inheritance has one parent class and two clild class.
*/
