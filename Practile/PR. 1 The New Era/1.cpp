#include <iostream>
using namespace std;

class Distances
{
public:
    int feet, intch;
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

    int Tfeet = d1.feet + d2.feet;
    int Tintch = d1.intch + d2.intch;

    if (Tfeet >= 12)
    {
        Tintch -= 12;
        Tfeet++;
    }

    cout << "Total Length : " << Tfeet << " Feet " << Tintch << "Intch";
}
