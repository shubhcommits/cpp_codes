#include<iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"Enter the number factors of which to be find";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            sum=sum+i;
        }
    }
    if(sum==2*n){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}