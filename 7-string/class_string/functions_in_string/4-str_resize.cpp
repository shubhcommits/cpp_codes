#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello";
    str.resize(66);
    cout<<str.capacity();
    return 0;
}