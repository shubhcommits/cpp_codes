#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello";
    // str.insert(3,"good");
    str.insert(3,"good",2); 
    cout<<str;
    return 0;
}