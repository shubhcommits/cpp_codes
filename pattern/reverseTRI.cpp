#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cout<<"Enter no of rows and column";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i+j<n){
                cout<<"  ";
            }
            else if(i+j>=n){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
