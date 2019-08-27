#include<iostream>
#include<list>
using namespace std;
template<typename T>
void display(const T& container)
{
    for(auto iter=container.cbegin(); iter!=container.cend();iter++)
    cout<<*iter<<"  ";
    cout<<endl;
}
int main()
{
    list<int> intlist{45,65,23,47,89};
    list<int>::const_iterator iter=(intlist.cbegin());
    cout<<"Displaying list\n";
    display(intlist);
    cout<<"Iterator pointing at value\n";
    cout<<*iter<<endl;
    intlist.insert(intlist.cbegin(),30);
    cout<<"After changing the list \n";
    display(intlist);
    cout<<"iterator is pointing to: "<<*iter<<endl;
    return 0;
}
