#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter two number";
    cin>>x>>y;
    cout<<"Enter a for sum,s for subtract,m for multiply and d for divide";
    char operato;
    switch(operato){
        case 'a':
        z=x+y;
        cout<<z;
        break;
        case 's':
        z=x-y;
        cout<<z;
        break;
        case 'm':
        z=x*y;
        cout<<z;
        break;
        case 'd':
        z=x/y;
        cout<<z;
        break;
        default :
        cout<<"Invalid entery";
        break;
    }
    return 0;
}