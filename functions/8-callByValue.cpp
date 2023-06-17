#include<iostream>
using namespace std;
 int swap(int a,int b){
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;  // callByValue mechanism ids used when you want only to return something in the formal function
}
int main(){
    int x,y;
    x=10;
    y=20;
    swap(x,y);   // the effect of formal variable does not affect the actual variable
    cout<<x<<" "<<y;
    return 0;
}