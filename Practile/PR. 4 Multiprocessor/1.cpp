#include <iostream>
using namespace std;

class Message
{
private:
    string first_name = "NULL";
    string Full_Name;

public:
    Message(string name) // Create consructor beacuse when we create object then auto called
    {
        this->first_name = name; // To assigment value in attribut os class Message
    }

    void Print() // Display name
    {
        cout << this->first_name << endl;
    }

    // Logic
    void Print(string sec)
    {
        this->Full_Name = this->first_name + " " + sec; // To add space between name and surname
        cout << this->Full_Name;
    }
};

int main()
{
    string name, surname;
    cout << "Enter first name : ";
    cin >> name;

    Message obj(name);

    obj.Print();

    cout << "Enter your surname : ";
    cin >> surname;

    obj.Print(surname);

    return 0;
}
