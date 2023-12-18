#include <iostream>
using namespace std;

class P
{
public:
    float temprature;

    void Celsius_Input()
    {
        cout << "Enter temprature in Celsius : ";
        cin >> temprature;
    }
};

class Q : public P
{
public:
    void Fahrenheit()
    {
        temprature = (temprature * 9 / 5) + 32;
        cout << endl
             << "Temprature in Fahrenheit : " << temprature << endl;
    }
};

class R : public Q
{
public:
    void Kelvin()

    {
        temprature = ((temprature - 32) * 5 / 9) + 273.15;
        cout << endl
             << "Temprature in Kelvin : " << temprature << endl;
    }
};

int main()
{
    Q q1;
    R r1;

    q1.Celsius_Input();
    q1.Fahrenheit();
    r1.Kelvin();
}
