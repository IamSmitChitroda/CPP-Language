#include <iostream>
using namespace std;

class Distances
{
public:
    int feet, intch, cal;
};

int main()
{
    Distances d1;
    Distances d2;

    cout << "input1 => \nfeet : ";
    cin >> d1.feet;
    cout << ", Intch : ";
    cin >> d1.intch;
    cout << endl
         << "input2 => \nfeet : ";
    cin >> d2.feet;
    cout << ", Intch : ";
    cin >> d2.intch;

    // Logic
    d1.intch = (d1.feet * 12) + (d1.intch);
}