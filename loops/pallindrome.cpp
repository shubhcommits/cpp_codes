//if a number is equal to reverse of that number that it is Pallindrome
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,originalnum,r;
    cout<<"Enter a number to be checked";
    cin>>n;
    n=originalnum;
    while(n!=0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==originalnum){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not a Pallindrome";
    }
    return 0;
}