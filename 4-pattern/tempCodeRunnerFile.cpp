#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of rows and column";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}