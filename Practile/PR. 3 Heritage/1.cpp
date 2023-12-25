#include <iostream>
using namespace std;

class Shape
{
protected:
    double width, height;

public:
    Shape()
    {
        cout << "Enter Width : ";
        cin >> width;
        cout << "Enter Height : ";
        cin >> height;
    }
};

class Triangle : public Shape
{
public:
    void Area_of_Triangle()
    {
        cout << "Area of Triangle : " << 1 / 2 * width * height << endl;
    }
};

class Rectangle : public Shape
{
public:
    void Area_of_Rectangle()
    {
        cout << "Area of Rectangle : " << width * height << endl;
    }
};

int main()
{
    Triangle obj1;
    Rectangle obj2;

    obj1.Area_of_Triangle();
    obj2.Area_of_Rectangle();
    return 0;
}
