#include<iostream>
#include<string.h>

class my_str
{
private:
    char* buffer;
public:
    my_str(const char* init_str)
    {
        buffer=NULL;
        if(init_str!=NULL)
        {
        buffer=new char[strlen(init_str)+1];
        strcpy(buffer,init_str);
        }
    }
    ~my_str()
    {
        std::cout<<"Destructor Invoked\n";
        delete [] buffer;
    }

    int getlength()
    {
        return strlen(buffer);
    }
    const char* getstr()
    {
        return buffer;
    }
};

void use_my_str(my_str str)
{
    std::cout<<"string buffer in my_str"<<str.getlength()<<" long & \nbuffer contains\n "<<str.getstr();
}
int main()
{
my_str object("Hi, from main function");
use_my_str(object);
return 0;
}
