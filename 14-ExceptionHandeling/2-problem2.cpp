#include<iostream>
using namespace std;
int division(int a,int b){ 
    if(b==0)
        throw 101;  // we can throw anything,char,integer,class etc
        return a/b;
}
int main(){
    int x=5,y=5,z;
    try{
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e){  // this is a catch block for integersproblem
        cout<<"Division by zero "<<endl<<"Error code "<<101;
    }
    cout<<"Function ended";
}