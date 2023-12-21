#include <iostream>
using namespace std;

class Cricket
{
protected:
    void getTotalOver(int over)
    {
        cout << "Total over of match : " << over << endl;
    }
};

class Test_match : public Cricket
{
public:
    void getTotalover(int over)
    {
        cout << "match over : " << over << endl;
    }
};

int main()
{

    Test_match obj1;

    obj1.getTotalOver(5);
}
