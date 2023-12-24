#include <iostream>
#include <string.h>
using namespace std;

class Message
{
protected:
    string Str2 = "NULL", merge_string;

public:
    Message(string Str1)
    {
        cout << endl
             << "Enter second string : ";
        cin >> Str2;

        strcat(Str1, this->Str2);
        strcpy(this->merge_string, Str1);
    }

    void string_display()
    {
        cout << endl
             << "Merge string : " << this->merge_string;
    }
};

int main()
{
    string Str;

    cout << "Enter first string : ";
    cin >> Str;
    Message obj(Str);

    obj.string_display();
}
