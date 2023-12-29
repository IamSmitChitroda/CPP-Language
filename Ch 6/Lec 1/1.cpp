#include <iostream>
using namespace std;

class Admin
{
private:
    long int total_annual_revenue;

protected:
    // int total_annual_revenue;
    int employee_salary;
    int total_staff;
    int manager_salary;
    bool can_terminate;

public:
    static char company_name[20];

    static void setCompanyName()
    {
        cout << "Enter company name : ";
        gets(company_name);
        cout << "\n\n\n"
             << company_name;
    }
};

char Admin::company_name[20] = "Xyz Company";

class Manager : public Admin
{
public:
};

class Employee
{
};

int main()
{

    Admin o;
    o.setCompanyName();
    return 0;
}