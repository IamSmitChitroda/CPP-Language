#include <iostream>
using namespace std;

calss A
{
    int n;

public:
    void setData()
    {
        cout << "Enter any value : ";
        cin >> this->n;
    }

    void getData()
    {
        cout << endl
             << "A : " << this->n;
    }

    bool operator<(A o2)
    {
        if (this->n < o2.n)
        {
            return true;
        } else {

            return false;
        }
    }
};

int main()
{
    A o1, o2;

    o1.setData();
    o2.setData();

    o1.getData();
    o2.getData();

    (o1 < o2)
        ? cout << "O2 is big !!!"
        : cout << "O1 is big !!!";

    return 0;
}
