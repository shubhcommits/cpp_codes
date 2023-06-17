#include<iostream>
using namespace std;
 int swap(int &a,int &b){
    cout<<&a<<" "<<&b<<endl;  // address of a and b will be displayed
    int temp;
    temp =a;
    a=b;
    b=temp;
    // cout<<a<<" "<<b<<endl;  
}
int main(){
    int x,y;
    x=10;
    y=20;
    swap(x,y);     // in this call by reference it will not generate new piece of 
    cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y;   // machine code it will copy the machine code at the 
    return 0;            // place of function is called
}
// definitely the formal function mechanism occurs at main function
// call by reference works same as call by address but it works for simple functions
/* we should not write any complex code loke 
 for(int i=0;i<10;i++){
    cout<<i;
}
*/