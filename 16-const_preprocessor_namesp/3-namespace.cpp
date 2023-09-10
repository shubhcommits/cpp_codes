#include<iostream>
using namespace std;
namespace First{
void fun(){
    cout<<"First";
}
};
namespace Second{
void fun(){
    cout<<"Second";
}
}
// int main(){
//     // First::fun();
//     Second::fun();
// }
using namespace First;
int main(){ 
    // fun();
    Second::fun();
}