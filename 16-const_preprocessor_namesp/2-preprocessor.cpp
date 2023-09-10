#include<iostream>
using namespace std;
#define max(x,y) (x>y?x:y)
#define msg(x) #x
#define PI 3.14
#ifndef PI
    #define PI 3
    #endif
int main(){
    cout<<PI<<endl;  // Here PI is not variable and value assign before compilation
    cout<<max(8,5)<<endl;
    cout<<msg(Hello);
}