#include<iostream>
#include<string>
using namespace std;
int main(){
    int k;
    string str="madam";
    string s[str.length()];
    s[k]= s[str.length()];
    for(int i=0;str[i]!='\0';i++){
        s[k-i]=s[i];
        s[k]=s[k-i];
    }
    if(s[k]==str){
        cout<<"pallindrome";
    }
    return 0;
}