// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="SHUBHAM";
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]>=65 && str[i]<=90){
//         str[i]=str[i]+32;
//         }
//     }cout<<str;
//     return 0;

// changing everything to uppercase and nothing do to numbers
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shUBh11m";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=123){
            str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
}