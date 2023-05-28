#include<iostream>
using namespace std;
int main(){
    int A[10],n=10,i,key;
    cout<<"Enter 10 numbers";
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the number to be checked";
    cin>>key;
    for(i=0;i<n;i++){
        if(key==A[i]){
            cout<<"Found at"<<" "<<i;
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}