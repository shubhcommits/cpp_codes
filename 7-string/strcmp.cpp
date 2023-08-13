#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="HELLO";   //which letter ascii code is greater that is greater
    char s2[20]="HELLo";
    cout<<strcmp(s1,s2);  // if s1 if greater then --> 1 in case of s1 is lesser than s2 it will be --> -1 inn case of equal it will -->0
    return 0;
}