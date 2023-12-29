// Create a Bank Management System using array of object which will take A/C
// Number , A/C Name , A/C Type , A/C Branch , A/C Balance from user. Also add a
// feature by that user can search any record by  A/C Number.
#include <iostream>
#include <string.h>
using namespace std;

class Bank_management_system
{
public:
    long int acc_number;
    char acc_name[20];
    string acc_type;
    string acc_branch;
    double acc_balance;

    Bank_management_system() // Setter
    {
        cout << "Enter accout number : ";
        cin >> this->acc_number;
        fflush(stdin);
        cout << "Enter account name : ";
        gets(this->acc_name);
        cout << "Entre account type : ";
        cin >> this->acc_type;
        cout << "Enter account branch : ";
        cin >> this->acc_branch;
        cout << "Enter account balance : ";
        cin >> this->acc_balance;
        cout << endl;
    }
};

int main()
{
    int user;
    cout << "Enter number of user : ";
    cin >> user;

    Bank_management_system o[user];

    long int a_number;
    cout << "Enter account number of user : ";
    cin >> a_number;
    // o[0].searchData();

    for (user; user >= 0; user--)
    {
        if (a_number == Bank_management_system[i].account)
        {
            cout << endl
                 << "Account number : " << Bank_management_system[i].acc_number << endl
                 << "Account name : " << Bank_management_system[i].acc_name << endl
                 << "Account type : " << Bank_management_system[i].acc_type << endl
                 << "Account branch : " << Bank_management_system[i].acc_branch << endl
                 << "Account balance : " << Bank_management_system[i].acc_balance << endl;
        }
    }
    return 0;
}
