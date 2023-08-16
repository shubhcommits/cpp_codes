#include<iostream>
using namespace std;
class Car{  
    public:
    virtual void start()=0; //This is abstract class
};
class Innova:public Car{
    void start(){
        cout<<"Innova started"<<endl;
    }
};
class fortuner:public Car{
    void start(){
        cout<<"fortuner started";
    }
};
int main(){
    // Car c; // object can not be created because it is in abstract class
    Car *ptr=new Innova();
    ptr->start();
    ptr=new fortuner();
    ptr->start();
}

// if the base class is abstract then it should be overwrite 