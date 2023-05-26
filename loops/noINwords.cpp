#include<iostream>
using namespace std;
int main(){
    int n,r,rev1=0,rev2=0;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0){
    r=n%10;
    n=n/10;
    rev1=rev1*10+r;
    }
    rev2=rev1;
    while(rev2!=0){
    r=rev2%10;
    rev2=rev2/10;
    switch(r){
        case 1: cout<<"One";
        break;
        case 2: cout<<"Two";
        break;
        case 3: cout<<"Three";
        break;
        case 4: cout<<"Four";
        break;
        case 5: cout<<"Five";
        break;
        case 6: cout<<"Six";
        break;
        case 7: cout<<"Seven";
        break;
        case 8: cout<<"Eight";
        break;
        case 9: cout<<"Nine";   
    }
    cout<<"\n";
    }
    return 0;
}