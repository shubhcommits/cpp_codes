#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]= "Good";
    char s2[10]= "Morning";
    // strcat(s1,s2);
    strncat(s1,s2,4);  // here 3 is length and only three letters will concinated
    cout<<s1;
    return 0;
}