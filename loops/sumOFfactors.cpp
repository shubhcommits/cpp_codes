#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the number factors of which to be find";
    cin>>n;
    cout<<"Factors are\n";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            sum=sum+i;
        }
    }
    cout<<"sum of factots is"<<" "<<sum;
    return 0;
}