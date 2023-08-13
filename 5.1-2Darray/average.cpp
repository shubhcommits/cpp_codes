#include<iostream>
using namespace std;
int main(){
    float A[10],c=0.00,sum=0.00,average;
    int i,n;
    cout<<"Enter elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i++){
        sum=sum+A[i];
        c++;
    }
    average=sum/c;
    cout<<average;
    return 0;

}