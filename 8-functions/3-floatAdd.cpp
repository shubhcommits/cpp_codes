#include<iostream>
using namespace std;
float add(float a,float b){
    float c;
    c=a+b;
    return c;
}
int main(){
    float a=2.5,b=2.7,c;   // two different function can have same name of variable
    c=add(a,b);
    cout<<"sum is "<<c;
    return 0;
}