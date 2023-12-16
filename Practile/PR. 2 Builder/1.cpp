#include <iostream>
#
using namespace std;
class Railway
{
private:
    long int Train_number;
    char Train_Name[50];
    char Source[20];
    char Destination[20];
    char train_time[20];
    int choice;

public:
    void Setter()
    {
        cout << "Enter Train number : ";
        cin >> this->Train_number;
        fflush(stdin);
        cout << "Enter Train name : ";
        gets(this->Train_Name);
        cout << "Enter train Source : ";
        gets(this->Source);
        cout << "Enter train Destination";
        gets(this->Destination);
        cout << "Enter train time : ";
        gets(this->train_time);
    }

    void Display_Records()
    {
    lable:
        cout << "\tNo\tTrain" << endl
             << "\t--\t-----" << endl
             << "\t1.\tRajdhani Express" << endl
             << "\t2.\tVande Bharat" << endl
             << "\t3.\tDuronto Express" << endl
             << "Enter your choice." << endl;
        cin >> this->choice;

        switch (this->choice)
        {
        case 1:
            cout << "Rajdhani Express !!" << endl
                 << "Enter number of tickets that you wont to purchese : ";
            cin >> this->choice;

            if (this->choice < 3)
            {
                cout << "You can't buy " << choice << "tickets. You have to buy 3 or more tickets." << endl;

                goto lable;
            }
        }
    }
};

int main()
{
    Railway r1;
    r1.Setter();
    r1.Display_Records();
}