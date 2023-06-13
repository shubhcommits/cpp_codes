#include<iostream>
using namespace std;
int add(int x,int y){  // this is function 1
    return x+y;
}
int add(int x,int y,int z){
    return x+y+z;
}
float add(float x,float y){  // this function is differnt from function 1 as i is of different data type
    return x+y;
}
int main(){
    int a=10,b=5,c,d;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<" "<<d<<endl;
    float i=2.5f,j=3.7f,k;
    k=add(i,j);
    cout<<k;
}
