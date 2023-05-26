#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the rows and column";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"* ";
        }
    }
}