#include <iostream>
using namespace std;
#include <string>

class Data
{
public:
    string name;
    int age;
};

int main()
{

    Data person;

    person.name = "Person 1";
    person.age = 25;

    cout << "Name: " << person.name << ", Age: " << person.age << endl;

    person.name = "Person 2";
    person.age = 30;

    cout << "Updated Name: " << person.name << " , Updated Age: " << person.age << endl;

    return 0;
}
