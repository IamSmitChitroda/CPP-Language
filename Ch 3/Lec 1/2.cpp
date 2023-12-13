#include <iostream>
#include <string.h>
using namespace std;

class CustomerData
{

private:
    int  id;
    char name[20];
    int  age;
    char course[20];
    char city[20];
    char mobil_Number[10];
    int  sim_card_validity;
    char telecom_brand_name[10];

public:
    void setter()
    {
        cout << endl
             << "Enter your ID : ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter your name : ";
        gets(this->name);
        cout << "Enter your age : ";
        cin >> this->age;
        fflush(stdin);
        cout << "Enter your course : ";
        gets(this->course);
        fflush(stdin);
        cout << "Enter your city : ";
        gets(this->city);
        cout << "Enter your email : ";
        gets(this->mobil_Number);
        cout << "Enter your college name : ";
        cin >> this->sim_card_validity;
        fflush(stdin);
        cout << "Enter telecom brand name : ";
        gets(telecom_brand_name);
    }

    void getter()
    {
        cout << endl
             << "Customer ID\t\t\t:\t"     << this->id                << endl
             << "Customer name\t\t\t:\t"   << this->name              << endl
             << "Customer Age\t\t\t:\t"    << this->age               << endl
             << "Customer course\t\t\t:\t" << this->course            << endl
             << "Customer city\t\t\t:\t"   << this->city              << endl
             << "Customer email\t\t\t:\t"  << this->mobil_Number      << endl
             << "Customer college\t\t:\t"  << this->sim_card_validity << endl
             << "Customer telecom brand name\t: " << this->telecom_brand_name;
    }
};

int main()
{

    CustomerData obj1, obj2, obj3, obj4, obj5;
    obj1.setter(); // Student data intput
    obj2.setter();
    obj2.setter();
    obj3.setter();
    obj4.setter();
    obj5.setter();

    obj1.getter(); // Student data output
    obj2.getter();
    obj2.getter();
    obj3.getter();
    obj4.getter();
    obj5.getter();

    return 0;
}
