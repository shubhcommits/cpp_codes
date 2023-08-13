#include<iostream>
using namespace std;
int main(){
    int A[5]{1,2,8,6,5};
    int *p=A;
    cout<<*p; //expected output 1;
    p++;
    cout<<*p; //expected output 2;
    p--;
    cout<<*p; //expected output 1;
    p=p+2;
    cout<<*p; //expected output 8;
    p=p-2;
    cout<<*p<<endl; //expected output 1;
    cout<<p; // * will give the data and this will give the address;
    return 0;
}