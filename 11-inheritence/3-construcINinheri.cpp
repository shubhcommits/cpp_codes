#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Defaut of Base"<<endl;
    }
    Base(int x){
        cout<<"Constructor of Base"<<endl;
    }
    Base(int x,int y){
        cout<<"Constructor of Base"<<endl;
    }
};
class derived:public Base{
    public:
    derived(){
        cout<<"Default of derived"<<endl;
    }
    derived(int x){
        cout<<"Constructor of derived"<<endl;
    }
     derived(int x,int y):Base(x){   // Here  :Base is  
     // used to call constructor of base
        cout<<"Constructor of derived"<<endl;
    }
};
int main(){
    derived c(10,5);
}
