#include<iostream>
using namespace std;
class date {
	int day, month, year;
public:
	date(int d, int m, int y) :day{ d }, month{ m }, year{ y } {};

	//date&
	void operator ++()
	{
		day++;
		//return(*this);
	}
	void print()
	{
		cout << "The date is: " << day << "/" << month << "/" << year<<endl;
	}
};
int main()
{
	int d = 0, m = 0, y = 0;
	cout << "Enter date dd mm yyyy\n";
	cin >> d >> m >> y;
	date today(d, m, y);
	++today;
	today.print();
	return 0;
}
