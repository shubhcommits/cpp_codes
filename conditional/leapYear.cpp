/*If a year is divisibe by 4 ---> Leap Year
If it also divisible by 100 with 4 then it should be divisible by 400 to be leap year
*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year";
    cin>>year;
    if(year%4==0){
        if(year%100==0){
          if(year%400==0){
            cout<<"Leap Year";
          }
          else{
            cout<<"Not a leap year";
          }
        }
        else{
            cout<<"Leap Year";
        }
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}