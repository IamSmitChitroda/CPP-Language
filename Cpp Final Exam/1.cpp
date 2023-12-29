// Write a C++ program to print factorial series using recursion.

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);

    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int fact = factorial(n);
    cout << fact;

    return 0;
}
