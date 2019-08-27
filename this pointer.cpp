#include<iostream>
using namespace std;
class fish
{   int no_of_fish;
    public:
    fish(int f=0):no_of_fish{f}
    {cout<<"INSIDE FISH\n";}
    void work(){
    cout<<"\nThis works\n";
    }
   fish addthis()
    { this->work();
        cout<<"This= "<<this<<endl<<"FISH ="<<no_of_fish<<endl;
    }
};
int main()
{   //unsigned int add=0;
    fish object(4);
    object.addthis();

    cout<<"OBJECT="<<&object<<endl;
    return 0;
}
