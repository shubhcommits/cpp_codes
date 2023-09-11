#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ifstream infile;
    // infile.open("My.txt");  // this will only open file if it exits
    ifstream infile("My.txt");  // lint 5,6 can also written like this
    if(infile)cout<<"File is open"<<endl;
    string str;
    int x;
    string s;
    infile>>str;
    infile>>x;
    infile>>s;
    // if(infile.eof()) cout<<"End of file";
    // infile.close();
    cout<<str<<" "<<x<<" "<<s<<endl;
    // if(!infile){  // to check whether file exits or not
    //     cout<<"File can not be open";
    // }
    if(infile.eof()) cout<<"End of file";
    infile.close();
}