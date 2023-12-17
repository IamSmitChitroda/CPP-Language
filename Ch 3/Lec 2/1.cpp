#include <iostream>
#include <string.h>
using namespace std;

class HotelSystem
{
    int hotel_id;
    char hotel_name[20];
    string hotel_type;
    int hotel_rating;
    char hotel_location[50];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    int Number_of_Hottel()
    {
        int n;
        cout << "Enter number of Hotel : ";
        cin >> n;

        return n;
    }

    void SetHotelData()
    {
        cout << "Enter hotel ID : ";
        cin >> this->hotel_id;
        fflush(stdin);
        cout << "Enter hotel name : ";
        gets(this->hotel_name);
        cout << "Enter type of hotel (Like hotel or motel) : ";
        cin >> this->hotel_type;
        cout << "Enter hotel rating : ";
        cin >> this->hotel_rating;
        fflush(stdin);
        cout << "Enter hotel location : ";
        gets(this->hotel_location);
        cout << "Enter establish year : ";
        cin >> this->hotel_establish_year;
        cout << "Enter room quantity : ";
        cin >> this->hotel_room_quantity;
    }

    void GetHotelTital()
    {
        cout << endl
             << "ID\tName\tType\tRating\tLocation\tEsta_Year\tRoom_que" << endl;
    }

    void GetHotelData()
    {
        cout << this->hotel_id << "\t" << this->hotel_name << "\t" << this->hotel_type << "\t" << hotel_rating << "\t"
             << this->hotel_location << "\t" << this->hotel_establish_year << "\t" << this->hotel_room_quantity << endl;
    }
};

int main()
{
    HotelSystem n;
    int num = n.Number_of_Hottel();

    HotelSystem hotel[num];

    for (int i = 0; i < num; i++)
        hotel[i].SetHotelData();

    n.GetHotelData();
    for (int i = 0; i < num; i++)
        hotel[i].GetHotelData();

    return 0;
}