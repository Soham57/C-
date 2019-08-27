#include<iostream>
#include<list>
#include<string>
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
list<string> str_list;
str_list.push_back("Sammer");
str_list.push_back("Sourabh");
str_list.push_back("Surbhi");
str_list.push_back("Suruchi");
str_list.push_back("Shweta");
str_list.push_back("Shubham");
str_list.push_back("Sudarshana");
str_list.push_back("Pooja");
str_list.push_back("Soham");
str_list.push_back("Rishikesh");
str_list.push_back("Krishna");
cout<<"Names in list\n";
display(str_list);
cout<<"\n\nNames after sorting\n";
str_list.sort();
display(str_list);
cout<<"\n\nNames after reverse\n";
str_list.reverse();
display(str_list);
return 0;
}

