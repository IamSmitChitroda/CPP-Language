#include <iostream>
using namespace std;

class Abstract_class
{
protected:
    // Pure virtual function
    virtual void Area(double width, double length) = 0;

public:
};

class Circle : public Abstract_class
{

    double row, area;

public:
    void Area(double r)
    {
        area = (r * r) * (22 / 7);
        cout << "Area of Circle : " << area;
    }

    Circle() // Setter
    {
        // cout << "Enter width : ";
        // cin >> this->width;
        // cout << "Enter length : ";
        // cin >> this->length;

        cout << "Enter row : ";
        cin >> this->row;
        Area(row);
    }
};

// class triangle : public Abstract_class
// {
// };

// class Rectangle : public Abstract_class
// {
// };

int main()
{
    Circle o1;
    // o1.setData();
    return 0;
}