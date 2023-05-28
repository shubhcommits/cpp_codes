#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int d,a,b,c;
    cout<<"Enter the value of a,b and c of equation";
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d==0){
        cout<<"roots are real and equal";
    }
    else if(d>0){
        cout<<"roots are real and unequal";
    }
    else{
        cout<<"roots are imaginary";
    }
    return 0;
}