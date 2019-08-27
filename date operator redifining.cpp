#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class date  
{
private:
	int day, month, year;
	string dateconv;
public:
	date(int inday, int inmonth, int inyear) :day{ inday }, month{ inmonth }, year{ inyear }{};
	date& operator ++()
	{ 
		day++;
		return *this;
	}
	date& operator --()
	{
		day--;
		return *this;
	}
	/*void display()                            //used to display the date
	{
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}*/
	operator const char* ()
	{
		ostringstream formatted_date;
		formatted_date << day << "/" << month << "/" << year;
		dateconv = formatted_date.str();
		return dateconv.c_str();
	}
};
int main()
{
	date holiday(2, 10, 2019);
	cout << "\nThe date is instantiated by ";
	cout << holiday;
	//holiday.display();
	cout << "\nOne day before date is:     ";
	--holiday;
	cout << holiday;
	//holiday.display();
	cout << "\nOne day after date is:      ";
	++holiday;
	cout << holiday;
	cout << endl << sizeof(date);
	//holiday.display();
	return 0;
}