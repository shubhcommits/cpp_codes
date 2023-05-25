//This is to take a name from user and give output a welcome message
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"May I know your name";
    // cin>>name; (this not giving full name)
    getline(cin,name);
    cout<<"Welcome "<<name;
    return 0;
}