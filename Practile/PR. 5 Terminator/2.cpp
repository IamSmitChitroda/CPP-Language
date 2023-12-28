#include <iostream>
using namespace std;

class Check_Eligibility
{
    int age;

public:
    Check_Eligibility()
    {
        cout << "Enter your Age : ";
        cin >> this->age;

        try
        {
            if (this->age > 18)
                cout << "You are eligible to vote !!!";

            else
                throw false;
        }
        catch (bool a)
        {
            cout << "You are not eligible to vote !!!";
        }
    }
};

int main()
{
    Check_Eligibility object;
}
