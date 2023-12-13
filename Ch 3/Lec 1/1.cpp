#include <iostream>
#include<string.h>
using namespace std;

class StudentData
{

private:
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    char email[20];
    char college[20];

public:
    void setter()
    {
        cout <<endl
             << "Enter your ID ";
        cin  >> this->id;
        fflush(stdin);
        cout << "Enter your name ";
        gets(this->name);
        cout << "Enter your age : ";
        cin  >> this->age;
        fflush(stdin);
        cout << "Enter your course : ";
        gets(this->course);
        fflush(stdin);
        cout << "Enter your city : ";
        gets(this->city);
        cout << "Enter your email : ";
        gets(this->email);
        cout << "Enter your college name : ";
        gets(this->college);
    }

    void getter()
    {
        cout << endl
             << "Student ID\t:\t"     << this->id     << endl
             << "Student name\t:\t"   << this->name   << endl
             << "Student Age\t:\t"    << this->age    << endl
             << "Student course\t:\t" << this->course << endl
             << "Student city\t:\t"   << this->city   << endl
             << "Student email\t:\t"  << this->email  << endl
             << "Student college\t:\t"<< this->email  << endl;
    }
};

int main()
{

    StudentData obj1, obj2, obj3, obj4, obj5;
    obj1.setter();//Student data intput    
    obj2.setter();    
    obj2.setter();    
    obj3.setter();    
    obj4.setter();    
    obj5.setter();

    
    obj1.getter();//Student data output
    obj2.getter();    
    obj2.getter();    
    obj3.getter();    
    obj4.getter();    
    obj5.getter();
    
    
    return 0;
}
