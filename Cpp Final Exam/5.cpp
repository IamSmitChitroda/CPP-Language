// Create a Hotel Management System using array of object which will take
// Hotel Number , Hotel Name , Hotel Type (like hotel or motel) , Hotel Rating , Hotel
// Location from user and using encapsulation and use of Parameterised Constructor

#include <iostream>
using namespace std;

class Hotel
{
private:
    char Hotel_number[10];
    char Hotel_name[50];
    char Hotel_Type[10];
    int Hotel_Rating;
    char Hotel_Location[50];

public:
    // Getter
    Hotel(char Hotel_number[], char Hotel_name[], char Hotel_Location[], int Hotel_Rating, char Hotel_Type[])
    {
        strcpy(this->Hotel_number = Hotel_number);
        strcpy(this->Hotel_name = Hotel_name);
        strcpy(this->Hotel_Type, Hotel_Type);
        this->Hotel_Rating = Hotel_Rating;
        strcpy(this->Hotel_Type, Hotel_Type);

        cout << "HOtel name" << Hotel_name << endl
             << "Number " << Hotel_number << endl
             << "Type" << Hotel_Type << endl
             << "Rating" << hotel_rating << endl
             << "Location : " << Hotel_Location;
    }
};

int main()
{
    char Hotel_number[10];
    char Hotel_name[50];
    char Hotel_Type[10];
    int Hotel_Rating;
    char Hotel_Location[50];

    cout << "Enter hotel number : ";
    cin >> Hotel_number;
    cout << "Enter hotel name : ";
    gets(Hotel_name);
    cout << "Enter hotel type";
    cin >> Hotel_Type;
    cout << "Enter hotel rating";
    cin >> Hotel_Rating;
    cout << "Enter hotel location : ";
    gets(Hotel_Location);

    cout << endl
         << endl;

    // To Display Data
    Hotel o(Hotel_number, Hotel_name, Hotel_Location Hotel_Rating, Hotel_Type);
    return 0;
}
