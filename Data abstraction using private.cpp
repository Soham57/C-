#include<iostream>
class car
{
private:
    double price;
    unsigned int top_speed;
public:
    car(unsigned int high_speed, double cost):top_speed{high_speed},price{cost}
         {
             std::cout<<"The on road info is-\n";
         }
        void show_data()
    {
          if(top_speed<=150)
        {
            std::cout<<"No such car available\n";
        }

        if(top_speed>=200)
        {
            std::cout<<"On road Top Speed is "<<std::fixed<<top_speed-5<<"km/hr"<<std::endl;
            std::cout<<"On road Price is "<<std::fixed<<price+100000;
        }
        else
        {

            std::cout<<"On road Top Speed is "<<top_speed-6<<"km/hr"<<std::endl;
            std::cout<<"On road Price is "<<price+50000<<std::endl;
        }

    }
    };

    int main()
    {
        std::cout<<"Enter car's top speed\n>";
        unsigned int speed=0;
        std::cin>>speed;
        std::cout<<"Enter car's price\n>";
        double cost=0;
        std::cin>>cost;
        car onroad(speed,cost);
        onroad.show_data();
        return 0;
    }

