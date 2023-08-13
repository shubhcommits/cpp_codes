// Base class pointer derived class object
#include<iostream>
using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;
    }
};
class Derived:public Base{
    public:
    void fun2(){
        cout<<"fun2 of Derived";
    }
};
int main(){
    Derived d;
    Base *ptr = &d;
    ptr->fun1();
    // ptr->fun2(); // This is not present in base class 
    // derived class function here can not be called
    /*Object of base class can not be assigned to 
    pointer of derived class*/
}