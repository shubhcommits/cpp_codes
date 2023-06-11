#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="programming";
    str.replace(2,7,"sm");  // here 8 is number of places we want to replace
    cout<<str;
    return 0;
}