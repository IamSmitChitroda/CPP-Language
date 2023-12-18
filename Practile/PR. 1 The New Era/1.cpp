#include <iostream>
using namespace std;

class Distances
{
public:
    int feet, inch;
};

int main()
{
    Distances d1, d2;

    cout << "Input 1 =>\nFeet: ";
    cin >> d1.feet;
    cout << "Inch: ";
    cin >> d1.inch;

    cout << "\nInput 2 =>\nFeet: ";
    cin >> d2.feet;
    cout << "Inch: ";
    cin >> d2.inch;

    // Logic

    int totalFeet = d1.feet + d2.feet;
    int totalInch = d1.inch + d2.inch;

    while (totalInch >= 12)
    {
        totalInch -= 12;
        totalFeet++;
    }

    cout << endl
         << "Total Length: " << totalFeet << " feet " << totalInch << " inch\n";

    return 0;
}
