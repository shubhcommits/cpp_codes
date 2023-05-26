/*A number is armstrong number if sum of cube of its digit is equal to original 
no*/
#include<iostream>
using namespace std;
int main(){
    int n,originalnum,r,sum=0;
    cout<<"Enter the number to be checked";
    cin>>originalnum;
    n=originalnum;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==originalnum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a Armstrong number";
    }
    return 0;
}