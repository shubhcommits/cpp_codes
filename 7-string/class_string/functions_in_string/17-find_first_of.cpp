#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="how are you";
    // cout<<s.find_first_of('o');
    // cout<<s.find_first_of('o',3);   // for char use single inverted comma
    cout<<s.find_first_of("ar");  // for string use double inverted comma
    return 0;
}