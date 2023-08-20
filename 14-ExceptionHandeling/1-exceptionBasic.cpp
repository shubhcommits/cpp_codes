#include<iostream>
using namespace std;
int main(){
    int a=10,b=0,c;  
    try{
        if(b==0){
            throw 101;  // this is error code what we want we can show
        }
        c=a/b;
        cout<<c;
    }
    // defining handeler
    catch(int e){
        cout<<"Division by zero"<<endl<<"Error code -> "<<101<<endl; 
    }
    cout<<"Bye"<<endl; // this byy statement always executed
}