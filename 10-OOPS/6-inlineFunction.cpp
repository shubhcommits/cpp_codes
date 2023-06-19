#include<iostream>
using namespace std;
class Test{
    public:
    void fun1(){
        cout<<"Inline"<<endl;   // if a function written insile class then it is automatically inline
    }
    void fun2();   // if here before void we write inline then it will be inline function
};
void Test:: fun2(){
    cout<<"Not Inline"<<endl;   // if a function written outside class then it is automatically outline
    }

    // for inline function not extra space is created it runs in many function space