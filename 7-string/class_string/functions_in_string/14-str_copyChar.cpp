#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Welcome";
    char s[10];
    str.copy(s,3);  //this  is used to copy required length of string into an array
    s[3]='\0';
    cout<<s;
    return 0;
}