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
    cout<<"Enter no. elements to be inserted in list";
    int no_elements=0;
    cin>>no_elements;
    list<int> intlist;
    while(no_elements)
    {
        cout<<"Enter element"<<no_elements<<endl;
        int data=0;
        cin>>data;
        intlist.push_front(data);
        no_elements--;
    }
    cout<<"Data stored in list\n";
    display(intlist);
}
