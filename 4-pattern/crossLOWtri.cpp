#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and column";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
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