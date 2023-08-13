#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,r_pos,r_neg;
    cout<<"Enter the value of a,b & c";
    cin>>a>>b>>c;
    r_pos=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    r_neg=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"roots are "<<r_pos<<" and "<<r_neg;
    return 0;
}