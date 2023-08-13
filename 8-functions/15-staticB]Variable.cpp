#include<iostream>
using namespace std;
int fun(){
    static int s = 10;   // this is static so it will be declare only one time no matter how many times function is called
    s++;
    cout<<s<<endl;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}