#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "\n\n----:Even number from Array:----\n\n";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << endl;
    }

    return 0;
}
