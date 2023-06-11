#include<iostream>
using namespace std;
int main(){
    char S[20];
    cout<<"Enter your name";
    // cin>>S; // This is taking only first name
    cin.get(S,20); // or can take cin.getline(S,50); //And this will print complete
    cout<<"Welcome "<<S;
    return 0;
}
// if we are using cin.get two or more time in program then between every cin.get we have to use cin.ignore(); to get input from all 
// and refuse keyboard buffering or we can use cin.getline this not required cin.ignore();