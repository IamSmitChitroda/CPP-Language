#include <iostream>
#include <string.h>
using namespace std;

void modify(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z')
                     ? str[i] + 32
                     : str[i] - 32;
    }

    cout << "String: " << str << endl;
}

int main()
{
    char str[50];
    cout << "Enter any string: ";
    cin >> str;

    modify(str);
    return 0;
}
