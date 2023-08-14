#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout<<"Display of Parent";
    }
};
class Child{
    public:
    void display(){
        cout<<"Display of child"; // this is override ad same function again defined
    }
};
int main(){
    // Parent p;
    // p.display();
    Child c;
    c.display();  // here it displayed function of the current object
    //Here derived class function is called
}
// writing a function once again is function overriding