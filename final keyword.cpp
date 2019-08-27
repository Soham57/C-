#include<iostream>
using namespace std;
class house
{
    int doors,windows;
public:
    house() {}
    house(int d,int w):doors{d},windows{w}
    {
        cout<<"Inside house";
    }
};
class house1 final :public house
{int a,b;
public:
    house1(int a1,int b1):house(a,b)
    {    a=a1;
         b=b1;
        cout<<"\nInside house1";
    }
    void showdata()
    {
        cout<<"\nEntered data \nwindows are"<<b<<endl<<"doors are"<<a;
    }
};
/*class bungalow:public house1
{                                                //uncomment to get error as house1 can't be derived
    public:
};*/
int main()
{

    house1 h1(5,7);
    h1.showdata();

}
