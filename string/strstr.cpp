#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="Programming";
    char s2[10]="gram";
    if(strstr(s1,s2) != NULL)
    cout<<strstr(s1,s2);
    else
    cout<<"Element not found";
    return 0;
}
// strchr --> this is used for char and it check occurence from left hand side
// strrchr --> this check occurence from right hand side