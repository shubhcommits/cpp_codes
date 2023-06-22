// To find first and second largest element in an array
#include<iostream>
using namespace std;
int Largest(int arr[],int n){
    int largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return largest;
}
int secondLargest( int arr[],int n){
    int secondLargest=0;
    int largest = Largest(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i] != arr[largest]){
            // if(secondLargest == 0){
            //     secondLargest = i;
            // }
            if(arr[i]>arr[secondLargest]){
                secondLargest = i;
            }
        }
    }
    return secondLargest;
}
int main(){
    int n,k;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    // cout<<Largest(arr,n);
    // cout<<arr[secondLargest(arr,n)];
    cout<<arr[Largest(arr,n)]<<" "<<arr[secondLargest(arr,n)];
}