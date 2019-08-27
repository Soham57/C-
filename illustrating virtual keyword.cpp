#include<iostream>
using namespace std;
class motor
{
public:
	motor()
	{
		cout << "\nInside motor base class\n";
	}
	virtual void description()
//     void description() uncomment to see use of virtual
	{
		cout << "\nPumps water increases efficency\n";
	}
};
void description_caller(motor& name)
{
    name.description();
}
class submarinemotor:public motor

{   public:
	submarinemotor()
	{
		cout << "\nInside submarinemotor\n";
	}
	void description()
	{
		cout << "Works inside water with a high speed\n";
	}

};
int main()
{
	motor m1;
	submarinemotor m2;
	description_caller(m1);
	description_caller(m2);
    //m1.description();
	//m2.description();
	return 0;
}
