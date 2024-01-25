#include<iostream>
using namespace std;
int main()
{
	int day, mon, year;
	cout << "Enter the day , Month  nd Year :\n";
	cin >> day >> mon >> year;

	while (day > 31 || mon > 12)
	{
		cout << "Enter the day , Month  nd Year :\n";
		cin >> day >> mon >> year;

	}
	cout << "The day : " << day << "  MONTH : " << mon << "  Year:" << year << endl;
}