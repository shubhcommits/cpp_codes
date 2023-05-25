#include<iostream>
using namespace std;
int main(){
    float r,area;
    cout<<"Enter the radius r";
    cin>>r;
    //area=3.14*r*r; OR 
    area=(float)22/7*r*r; // If using integer value not float to get value in float use (float) before integer value.
    cout<<"Area is "<<area;
    return 0;
}
