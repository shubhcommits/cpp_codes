#include<iostream>
using namespace std;
int main(){
    int n,remainder;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0){
        remainder=n%10;
        n=n/10;
        cout<<remainder<<endl;
    }
    return 0;
}