#include<iostream>
using namespace std;
class Base{
    public:
    virtual void fun1(){  // here virtual is written so that ptr call derived class function
        cout<<"Base class";
    }
};
class Derived:public Base{
    public:
    void fun1(){
        cout<<"Derived class";
    }
};
int main(){
    Derived d;
    Base *ptr = &d;
    ptr->fun1();  // this will call base class function
    // if virtual before base class function is written then it will call derived class
}