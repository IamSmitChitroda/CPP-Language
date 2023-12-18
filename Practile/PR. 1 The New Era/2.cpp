#include <iostream>
#include <string.h>
using namespace std;

class time
{

public:
	int hour;
	int minute;
	int second;
	int number;
};

int main()
{
	time t1;

	cout << "Enter second :";
	cin >> t1.number;

	t1.hour = t1.number / 3600;
	t1.minute = (t1.number % 3600) / 60;
	t1.second = t1.number % 60;

	cout << "Time :" << t1.hour << " : " << t1.minute << " : " << t1.second;
}
