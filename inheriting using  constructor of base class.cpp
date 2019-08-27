#include<iostream>
using namespace std;
class tools
{
private:
    bool issharp;
public:
    tools(bool choice):issharp{choice}
    {}
    void check()
    {
        if(issharp)
            cout<<"The tool is sharp\n";
        else
            cout<<"The tool is not sharp\n";
    }
};
class screwdriver:public tools
{
public:
    screwdriver():tools(true)
    {}
};
class hammer:public tools
{
public:
    hammer():tools(false){}
};
int main()
{
    screwdriver point;
    hammer flat;
    cout<<"Tools I have are\n";
    cout<<"Screwdriver ";
    point.check();
    cout<<"Hammer ";
    flat.check();
    return 0;
}
