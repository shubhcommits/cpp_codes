#include<iostream>
using namespace std;
int main(){
    int *p=new int[5];
    p[3]=15;
    p[2]=56;
    cout<<p[2]<<endl;
    delete []p;
    p=nullptr;
    return 0;
}