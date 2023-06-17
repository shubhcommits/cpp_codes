#include<iostream>
using namespace std;
int max(int a=0,int b=0,int c=0){
    return a>b && a>c?a:b>c?b:c;
}
int main(){
    cout<<max()<<endl;    // here same function working with 4 different number of input as putted a=0,b=0,c=0
    cout<<max(10)<<endl;   // if you want to fill default argument to the parameter then fill it from right hand side
    cout<<max(15,13)<<endl;
    cout<<max(15,13,17)<<endl;
    return 0;
}