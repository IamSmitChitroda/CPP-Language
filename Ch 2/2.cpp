#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;

    void SetCarData() // Function to take input of employee details
    {
        cout << endl
             << "Enter Car ID: ";
        cin  >> car_id;
        fflush(stdin); //To clean memory
        cout << "Enter Car Company Name: ";
        cin  >> car_company_name;
        cout << "Enter Car Color: ";
        cin  >> car_color;
        cout << "Enter Car Model: ";
        cin  >> car_model;
        cout << "Enter Car Release Year: ";
        cin  >> car_release_year;
    }

    void GetCarData() // Function to display employee details
    {
        cout << endl
             << "Car ID: "           << car_id              << endl;
        cout << "Car Company Name: " << car_company_name    << endl;
        cout << "Car Color: "        << car_color           << endl;
        cout << "Car Model: "        << car_model           << endl;
        cout << "Car Release Year: " << car_release_year    << endl;
    }
};

int main()
{
    Car c1, c2, c3, c4, c5;

    c1.SetCarData();
    c2.SetCarData();
    c3.SetCarData();
    c4.SetCarData();
    c5.SetCarData();

    c1.GetCarData();
    c2.GetCarData();
    c3.GetCarData();
    c4.GetCarData();
    c5.GetCarData();

    return 0;
}
