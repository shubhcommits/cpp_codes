#include<iostream>
using namespace std;
int add(int x,int y,int z=0){
    return x+y+z;
}
int main(){
    cout<<add(10,15)<<endl;
    cout<<add(10,15,2);
    return 0;
}