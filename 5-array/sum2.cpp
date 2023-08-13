#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,9,3,4},sum=0;
    for(int x:A){
        sum=sum+x;
    }
    cout<<sum;
    return 0;
}