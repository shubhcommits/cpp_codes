#include<iostream>
using namespace std;
class Parent{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funParent(){
        a=10;
        b=20;
        c=30;
    }
};
class Child:public Parent{ 
    // if  above public will change to protected or private 
    //..things will change accordingly
    public:
    void funChild(){
        // a=40;
        b=50;
        c=60;
    }
};
class Grandchild:public Child{
    public:
    void funGrandchild(){
        // a=7; // This is not working as parent is private
        // Below both two will work only when child is 
        // publuc or protected
        b=8;
        c=9;
    }
};
int main(){
    Child c;
    //c.a=1;  // private in parent
    //c.b=2;  not working --> protected in parent
    c.c=3;  
}
// we can not access protectted member in object
// we can access protected in class
// we can not access private in class or object
 