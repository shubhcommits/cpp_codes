#include<iostream>
using namespace std;
int main(){
int A[]={1,5,8,6,4,6,4,2};
int max=INT32_MAX;
for(auto x:A){ // here we have use for each loop
    if(x<max){
        max=x;
    }
}
cout<<max;
return 0;
}