#include <iostream>
using namespace std;

class Abstract_function
{
protected:
    double B, H, R;

public:
    // pure virtual function
    virtual void calculate() = 0;
};

class Circle : public Abstract_function
{
private:
    double r;

public:
    Circle()
    {
        cout << endl
             << "Enter Circle Radius : ";
        cin >> R;

        void calculate();
    }

    void calculate()
    {
        cout << "Radius of Circle is : " << (R * R) * (22 / 7);
    }
};

class Triangle : public Abstract_function
{
private:
    double h, b;

public:
    Triangle()
    {
        cout << "Enter Triangle Height : ";
        cin >> H;

        cout << "Enter Triangle Base  : ";
        cin >> B;

        void calculate();
    }

    void calculate()
    {
        cout << "Area of Triangle is : " << B * H * (1 / 2);
    }
};

class Ractangle : public Abstract_function
{
private:
    double h, b;

public:
    Ractangle()
    {
        cout << endl
             << endl
             << "Enter Ractangle Height : ";
        cin >> H;

        cout << "Enter Ractangle Base Length : ";
        cin >> b;

        void calculate();
    }

    void calculate()
    {
        cout << "Area of Ractangle is : " << H * B;
    }
};

int main()
{
    Circle c;
    c.calculate();

    Triangle t;
    t.calculate();

    Ractangle r;
    r.calculate();

    return 0;
}
