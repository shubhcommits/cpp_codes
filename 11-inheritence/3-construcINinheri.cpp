#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"default of base"<<endl;
    }
    Base(int x){
        cout<<"Parameter of Base "<<x<<endl;
    }
};
class Derived : Base{
    public:
    Derived(){
        cout<<"default of derived";
    }
    // Derived(int a){
    //     cout<<"Parameter of Derivved"<<a<<endl;
    // }
    Derived(int x,int a):Base(x){
        cout<<"Parameter of Derived "<<a<<endl;
    }
};
int main(){
    // Derived d;
    // Derived d(10);
    Derived d(10,20);
    // first default of Base wil be executed
    // after base default dERIVED DEFAULT WILL EXECUTED 
}