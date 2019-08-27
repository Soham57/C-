#include<iostream>
#include<string>
using namespace std;
class Four_wheeler
{
protected:
    bool sportscar;
    string name;
public:
    void speed()
    {
        if(sportscar)
            cout<<name<<" is fast\n";
        else
            cout<<name<<" is luxurious\n";
    }
};
class ferrai:public Four_wheeler
{
public:
    ferrai()
    {
        name="Ferrari";
        sportscar=true;
    }
};
class bmw720d:public Four_wheeler

{
public:
    bmw720d()
    {
        sportscar=false;
        name="BMW 720d";
    }
};
int main()
{
    bmw720d luxury;
    ferrai fast;
    cout<<"MY Cars have following characteristics\n";
fast.speed();
   luxury.speed();
    return 0;
}
