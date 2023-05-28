#include<iostream>
using namespace std;
int main(){
    int n=10,A[10],i,mid,l=0,h=9,key;
    cout<<"Enter the numbers in asending orders";
    for(i=0;i<10;i++){
        cin>>A[i];
    }
    cout<<"Enter the number to be find";
    cin>>key;
    while(l<=h){
    mid=(l+h)/2;
    if(A[mid]==key){
        cout<<"Item is found at"<<mid;
        return 0;
    }
    else if(key>A[mid]){
        l=mid+1;
    }
    else{
        h=mid-1;
    }
    }
    cout<<"Not find";
    return 0;
}