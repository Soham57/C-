#include<iostream>
using namespace std;
class car
{
public:
    void ignition()
    {
        cout<<"FUEL is ignited using a spark plug\n";
    }
    void accelerator()
    {
        cout<<"Charge is sent to the cylinder\n";
        cout<<"SPEED INCREASED\n";
    }
    void stop()
    {
        cout<<"Press brake\n";
        cout<<"Turn off the ignition\n";
    }
};
class startcar:private car           // to remove error
                                     //protected car
{
public:
    void start()
    {
        ignition();
        accelerator();
    }
};
class stopcar:public startcar
{ public:
    void brake()
    {
        stop();
    }
};

int main()
{
    startcar mycar;
    stopcar stop;
    mycar.start();
    stop.brake();
    return 0;
}
