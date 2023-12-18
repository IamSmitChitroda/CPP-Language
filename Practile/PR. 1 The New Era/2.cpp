#include <iostream>
#include <string.h>
using namespace std;

class TimeCalculate 
{
public:
	int hour;
	int minute;
	int second;
	int number;
};

int main()
{
	TimeCalculate t1;

	cout << "Enter second :";
	cin >> t1.number;

	// Logic
	t1.hour = t1.number / 3600;
	t1.minute = (t1.number % 3600) / 60;
	t1.second = t1.number % 60;

	cout << "Time :" << t1.hour << " : " << t1.minute << " : " << t1.second;
}
