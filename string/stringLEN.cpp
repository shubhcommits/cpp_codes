// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s[50]="Hello World";
//     cout<<strlen(s);
//     return 0;
// }

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter a string ";
    cin.getline(s,100);
    cout<<strlen(s)<<endl;
    return 0;
}