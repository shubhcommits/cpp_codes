/*enum is used to define n number of constant
under n constant*/
#include<iostream>
using namespace std;
enum day {mon=1,tue,wed=10,thus,fri,sat,sun};
enum dept{mechanical,cs,ut,ec};
int main(){
    day t=tue;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thus<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    return 0;
}