#include <iostream>
#include <string.h>
using namespace std;

class Supermarket_Billing
{
    string id;
    string pass;
    string UserInputID;
    string UserInputPass;

public:
    Supermarket_Billing()
    {
        cout << "Enter Email or phone number : ";
        cin >> this->id;
        cout << "Enter Password : ";
        cin >> this->pass;
        cout << endl
             << endl
             << "Your account has benn created !!" << endl
             << "Press anything to Login.";
        cin >> UserInputID;
        system("cls");

        Verification();
    }

    void Verification()
    {
    jump:
        cout << "Ener Login Data : " << endl
             << "ID : ";
        cin >> UserInputID;
        cout << "Password :  ";
        cin >> UserInputPass;

        system("cls");

        if ((id == UserInputID) && (pass == UserInputPass))
            Setter();
        else
        {

            cout << "Invalid input !!" << endl
                 << "Try again";
            goto jump;
        }
    }

    void Setter()
    {
        int choice;

        do
        {
            cout << endl
                 << endl
                 << "Welcome to supermarket billing system" << endl
                 << "1. Add Item" << endl
                 << "2. Dilplay all record" << endl
                 << "3. Search by item number " << endl
                 << "4. Exit." << endl
                 << "Enter your choice.";
            cin >> choice;

            switch (choice)
            {
            case 1:
                int number;
                char name[20];
                int quantity;
                double price;
                double discount;

                cout << "Enter Item Number: ";
                cin >> number;
                fflush(stdin);
                cout << "Enter Item Name: ";
                gets(name);
                cout << "Enter Quantity: ";
                cin >> quantity;
                cout << "Enter Price: ";
                cin >> price;
                cout << "Enter Discount: ";
                cin >> discount;

                cout << "Item added successfully.";
                break;

            case 2:
                cout << endl
                     << "All Records : " << endl
                     << "Item Number : " << number << endl
                     << "Item Name : " << name << endl
                     << "Quantity : " << quantity << endl
                     << "Price : " << price << endl
                     << "Discount : " << discount << "%" << endl;
                break;

            case 3:
                int searchNumber;
                cout << "Enter Item Number to search: ";
                cin >> searchNumber;

                cout << endl
                     << "All Records : " << endl
                     << "Item Number : " << number << endl
                     << "Item Name : " << name << endl
                     << "Quantity : " << quantity << endl
                     << "Price : " << price << endl
                     << "Discount : " << discount << "%" << endl;

                break;

            case 4:
                break;

            default:
                cout << "Invalid input." << endl
                     << "Try again.";
            }

        } while (choice != 4);
        cout << "\n\nThank you !!\nVisit again.";
    }
};

int main()
{
    Supermarket_Billing s1;

    return 0;
}
