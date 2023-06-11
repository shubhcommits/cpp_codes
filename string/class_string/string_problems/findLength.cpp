//this program is used to find length of string by counting characters one by one
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int count=0;
//     string str="shubham";
//     for(int i=0;str[i]!='\0';i++){
//         count++;
//     }
//     cout<<count;
//     return 0;
// }

//finding length using iterator
#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string str="shubham";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        count++;
    }
    cout<<count;
    return 0;
}