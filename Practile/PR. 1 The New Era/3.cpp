#include <iostream>
using namespace std;

class Class
{
private:
    string surname;

public:
    string name;
};

int main()
{
    Class a1;

    cout << "Enter name: ";
    cin >> a1.name;
    /*
        Here,
            -> Name is public Attributs.
            -> So, When we write obj(a1) . than suggestion only for name, not surnaem.
    */
}
