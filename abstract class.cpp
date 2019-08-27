#include<iostream>
using namespace std;
class base
{
public:

	virtual void print() = 0;
	virtual void area() = 0;
};
class circle :public base
{
	int rad;
	double area1;
public:
	circle()
	{
		rad = 0;
		area1 = 0;
	}
	void area() override
	{
		cout << "\nEnter Radius\n";
		cin >> rad;
		area1 = 3.1415 * rad * rad;
	}
	void print() override
	{
		cout << "Area of CIRCLE is:  " << area1 << endl;
	}
};
class triangle final :public base
{
	int b, h;
	double area1;

public:
	triangle()
	{
		area1 = 0.0;
		b = 0;
		h = 0;
	}
	void area() override
	{
		cout << "\nEnter Height\n";
		cin >> h;
		cout << "Enter Base\n";
		cin >> b;
		area1 = 0.5 * b * h;
	}
	void print() override
	{
		cout << "Area of TRIANGLE is:  " << area1 << endl;
	}
};
int main()
{
	circle c1;
	triangle t1;
	cout << "0.Circle\n1.Triangle\n";
	cout << "Enter your choice to calculate area\n";
	bool choice = 0;
	cin >> choice;
	if (choice)
	{
		t1.area();
		t1.print();
	}
	else
	{
		c1.area();
		c1.print();
	}
	return 0;
}
