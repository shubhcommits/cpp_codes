// pure virtual function
#include<iostream>
using namespace std;
class car{  // if class having pure virtual funtion then the class is called abstract class
    public:   // object of abstract class can not be created while poiter can be created
    virtual void start()=0;  // this is to acheive pure virtual
    virtual void stop()=0;
};
class Innova:public car{
    public:
    void start(){
        cout<<"start Innova"<<endl;
    }
    void stop(){
        cout<<"stop Innova"<<endl;
    }
};
class Fortuner:public car{
    public:
    void start(){
        cout<<"start Fortuner"<<endl;
    }
    void stop(){
        cout<<"stop Fortuner"<<endl;
    }
};
int main(){
    car *c=new Innova();
    c->start();
    c->stop();
    c=new Fortuner();
    c->start();
    c->stop();
}
