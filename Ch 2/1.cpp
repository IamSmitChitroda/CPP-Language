#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    double emp_salary;
    char emp_city[20];
    char emp_experience[20];
    char emp_company_name[20];

    void SetEmpoyeeData() // Function to take input of employee details
    {
        cout << "Enter Employee ID: ";
        cin  >> emp_id;
        fflush(stdin); //To clean Me
        cout << "Enter Employee Name: ";
        gets(emp_name);
        cout << "Enter Employee Age: ";
        cin  >> emp_age;
        fflush(stdin);
        cout << "Enter Employee Role: ";
        gets(emp_role);
        cout << "Enter Employee Salary: ";
        cin  >> emp_salary;
        fflush(stdin);
        cout << "Enter Employee City: ";
        gets(emp_city);
        cout << "Enter Employee Experience: ";
        gets(emp_experience);
        cout << "Enter Employee Company Name: ";
        gets(emp_company_name);
    }

    void GetEmployeeData() // Function to display employee details
    {
        cout << "Employee ID: "           << emp_id           << endl;
        cout << "Employee Name: "         << emp_name         << endl;
        cout << "Employee Age: "          << emp_age          << endl;
        cout << "Employee Role: "         << emp_role         << endl;
        cout << "Employee Salary: "       << emp_salary       << endl;
        cout << "Employee City: "         << emp_city         << endl;
        cout << "Employee Experience: "   << emp_experience   << " years" << endl;
        cout << "Employee Company Name: " << emp_company_name << endl;
    }
};

int main()
{
    Employee e1, e2, e3, e4, e5;

    e1.SetEmpoyeeData();
    e2.SetEmpoyeeData();
    e3.SetEmpoyeeData();
    e4.SetEmpoyeeData();
    e5.SetEmpoyeeData();

    e1.GetEmployeeData();
    e2.GetEmployeeData();
    e3.GetEmployeeData();
    e4.GetEmployeeData();
    e5.GetEmployeeData();

    return 0;
}
