#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};
class derived : public base {   // by this we can access data of base class by derived
    public:
    int y;
    void dispaly(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    // base b;
    // b.x = 25;
    // b.show();
    derived d; 
    d.x=5;
    d.y=6;
    d.show();
    d.dispaly();
}