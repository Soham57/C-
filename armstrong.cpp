#include<cmath>
#include<iostream>
int no_of_digits(int number)
{
    int digits=0;
    while(number!=0)
    {
        number/=10;
        digits++;
    }
    return digits;
}
bool is_armstrong(int & arm_number)
{   int number=arm_number;
    int no_digits =no_of_digits(arm_number);
    int t_digit=no_digits,sum=0;
    while(no_digits!=0)
    {
        int one_digit= number%10;
        number/=10;
        sum+= pow(one_digit,t_digit);
        no_digits--;
    }
    if(sum==arm_number)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    bool answer=false;
    std::cout<<"Enter a number\n>";
    int main_number=0;
    std::cin>>main_number;
    answer=is_armstrong(main_number);
    if(answer==true)
    {
        std::cout<<"\n"<<main_number<<" is ARMSTRONG Number";
    }
    return 0;
}
