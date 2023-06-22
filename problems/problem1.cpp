// To find first and second largest element in an array
// After that find the gcd of that two largest number in array
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
    int n,m,k,hcf;
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
    m=arr[Largest(arr,n)];
    k=arr[secondLargest(arr,n)];
    cout<<m<<" "<<k<<endl;
    if(m>k){
    int temp;
    temp = m;
    m=k;
    k=temp;
}
    for(int i=1;i<=m;i++){
        if(m%i==0 && k%i==0){
            hcf = i;
        }
    }
    cout<<hcf;
    return 0;
}