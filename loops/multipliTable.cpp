#include<iostream>
using namespace std;
int main(){
    int i,n,prod=1;
    cout<<"Enter the number to print a table";
    cin>>n;
    for(i=1;i<=10;i++){
        prod=n*i;
        cout<<prod<<endl;
        prod=1;
    }
    return 0;
}