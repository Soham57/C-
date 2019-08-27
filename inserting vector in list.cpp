#include<iostream>
#include<list>
#include<vector>
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
    vector<string> strvec{"This code is written in C++ by SOHAM MALVIYA"};
    cout<<"Vector contains\n";
    display(strvec);
    cout<<"Inserting elements partially in list\n\n";
    list<string> strlist;
    strlist.insert(strlist.begin(),strvec.begin(),strvec.end());
    cout<<"Displaying list\n";
    display(strlist);
    return 0;
}
