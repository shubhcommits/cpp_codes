// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="shubham";
//     string::iterator it;
//     for(it=str.begin();it!=str.end();it++){
//         *it=*it-32;
//         cout<<*it;
//     }
//     return 0;
// }
 //to display in reverse
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shubham";
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++){
        cout<<*it;
    }
    return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shubham";
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
    return 0;
}