#include<iostream>
using namespace std;
typedef int marks;
int main(){
    marks m1,m2,m3,total,average;
    cout<<"Enter the numbers of three subjects ";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    average=total/3;
    if(average>=60){
        cout<<"A";
    }
    else if(average>=35&&average<60){
        cout<<"B";
    }
    else if(average>=0&&average<35){
        cout<<"c";
    }
    else{
        cout<<"Wrong Entry";
    }
    return 0;
}