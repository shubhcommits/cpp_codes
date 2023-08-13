#include<iostream>
using namespace std;
int add(int x,int y,int z=0){
    return x+y+z;
}
int main(){
    cout<<add(10,15)<<endl;  // if two arguments passes it works
    cout<<add(10,15,2);    // if three arguments passes it will work
    return 0;
}