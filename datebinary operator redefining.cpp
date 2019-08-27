#include<iostream>
using namespace std;
class date {
private:
	int day, month, year;
public:
	date(int inday, int inmonth, int inyear) :day{ inday }, month{ inmonth }, year{ inyear }{};

	date operator + (int da)
	{
		date new_date(day + da,month,year);
		return new_date;
	}

	date operator - (int ds)
	{
		date new_date(day - ds, month, year);
		return new_date;
	}
	
	void display()
	{
		cout << day << "/" << month << "/" << year<<"\n";
	}
};
int main()
{
	date today(3, 07, 2019);
	cout << "The date is instantiated by ";
	today.display();
	cout << "After 2 days on ";

	date upcomingdate(today + 2);
	upcomingdate.display();
	cout << "I wil complete C++\n";
	cout << "But today is ";
	date previous(upcomingdate - 2);
	previous.display();
	return 0;
}