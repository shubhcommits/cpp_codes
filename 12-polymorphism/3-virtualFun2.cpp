#include<iostream>
using namespace std;
class Basiccar{
    public:
    virtual void start(){  //Thing will change after writing here virtual
        cout<<"Start car";
    }
};
class Advancecar:public Basiccar{
    public:
    void start(){
        cout<<"Play Music";
    }
};
int main(){
    Advancecar a;
    Basiccar *ptr=&a;
    ptr->start();
}