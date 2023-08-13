#include<iostream>
using namespace std;
int search(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(key == A[i]){
            return i;
        }
    }
    return 0;
}
int main(){
    int A[]={1,5,7,6,8,2};
    int k;   // key for search
    cout<<"Enter an element to be searched : ";
    cin>>k;
    int index = search(A,7,k);
    cout<<"Element is found at index : "<<index;
    return 0;
}