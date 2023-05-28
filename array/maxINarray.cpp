#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,4,8,2,4};
    int max=INT32_MIN;
    for(auto x:A){
        if(x>max){
            max=x;
        }
    }
    cout<<max;
    return 0;
}