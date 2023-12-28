#include <iostream>
using namespace std;

class Exception_handling
{
    int choice;

public:
    Exception_handling()
    {
        cout << "1. A number cannot be divided by zero" << endl
             << "2. A person cannot be able to vote if his/her age is less than 18" << endl
             << "3. A password cannot be validated if it doesn't contains an uppercase letter" << endl
             << "Enter your choice : ";
        cin >> this->choice;

        SwitchCase();
    }

    void SwitchCase()
    {
        switch (this->choice)
        {
        case 1:
            A();
            break;

        case 2:
            B();
            break;

        case 3:
            C();
            break;

        default:
            cout << "Invalid Input !!";
            break;
        }
    }

private:
    void A()
    {
        int a, b;
        string msj = "Error !!";

        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;

        try
        {
            if (b != 0)
                cout << "Ans : " << a / b << endl;
            else
                throw msj;
        }
        catch (string msj)
        {
            cout << msj;
        }
    }

    void B()
    {
        int age;

        cout << "Enter your Age : ";
        cin >> age;

        try
        {

            if (age > 18)
                cout << "You are eligble to vote !!";
            else
                throw false;
        }
        catch (bool a)
        {
            cout << "You can't eligble to vate !!";
        }
    }

    void C()
    {
        char password[20];
        int len = 0;
        cout << "Enter your password : ";
        cin >> password;

        while (password[len] != '\0')
        {
            len++;
        }

        for (int i = 0; i <= len; i++)
        {
            if (password[i] >= 65 && password[i] <= 90)
            {
                len = 21;
                break;
            }
        }

        len == 21
            ? cout << "Your password is valid"
            : cout << "Your password is'n valid";
    }
};

int main()
{
    Exception_handling obj;

    return 0;
}