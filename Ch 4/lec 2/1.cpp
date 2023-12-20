#include <iostream>
using namespace std;

class RBI
{
public:
    double ROI;
    long int net_Profit;
    long int cost_of_investment;

    void Setdata()
    {
        cout << "Enter Net profit : ";
        cin >> net_Profit;
        cout << "Enter Cost of investment : ";
        cin >> cost_of_investment;

        ROI = net_Profit / cost_of_investment * 100;
        cout << endl
             << "ROI = " << ROI;
    }
};

class SBI : public RBI
{
public:
    void SBI_ROI()
    {
        cout << "SBI Data : " << endl;
        Setdata();
    }
};

class BOB : public RBI
{
public:
    void BOB_ROI()
    {
        cout << "BOB Data : " << endl;
        Setdata();
    }
};

class ICICI : public RBI
{
public:
    void ICICI_ROI()
    {
        cout << "ICICI Data : " << endl;
        Setdata();
    }
};

int main(int argc, char const *argv[])
{
    SBI s1;
    BOB b1;
    ICICI i1;

    s1.SBI_ROI();
    b1.BOB_ROI();
    i1.ICICI_ROI();
    return 0;
}
