#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,6,7,9,4,3,8,23,65,6},y=0;
    for(auto x:A){
        if(y<x){
           y=x;
        }
    }
    cout<<"Largest number is"<<" "<<y;
    return 0;
}