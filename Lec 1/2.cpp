#include <iostream>
using namespace std;

int main()
{
    int y1, y2, n = 0;

    cout << "Enter start year : ";
    cin >> y1;
    cout << "Enter ending year : ";
    cin >> y2;

    int leap[50];

    for (int i = y1; i <= y2; i++)
    {
        if (i % 4 == 0)
        {
            leap[n] = i;
            n++;
        }
    }

    cout << "\n\nLeap year : \n";
    for (int i = 0; i < n; i++)
    {
        cout << leap[i] << endl;
    }

    return 0;
}
