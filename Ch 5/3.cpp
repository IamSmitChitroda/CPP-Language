#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void setData()
    {
        cout << "Enter Number : ";
        cin >> n;
    }
    bool operator<(Number n2)
    {
        if (n < n2.n) {
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
    Number n1, n2;
    n1.setData();
    n2.setData();

    n1 < n2
        ? cout << " N2 has Maxium value !!!"
        : cout << " N1 has Maximum value !!!";

    return 0;
}
