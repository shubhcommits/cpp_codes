#include<iostream>
using namespace std;
int main(){
    int u,v,a;
    float speed;
    cout<<"Enter value of u,v and a\n";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"speed is"<<speed;
    return 0;
}