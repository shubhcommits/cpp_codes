#include<iostream>
using namespace std;
int maximum(int x,int y,int z){
    if(x>y){
        if(x>z){
            return x;
        }
        else{
            return z;
        }
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int a=15,b=6,c=2,d;
    d=maximum(a,b,c);
    cout<<d<<" is greatest";
    return 0;
}