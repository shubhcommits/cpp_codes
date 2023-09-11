#include<iostream>
#include<fstream>  // for file handling this header should used
using namespace std;
int main(){
    ofstream ofs("My.txt",ios::trunc);  // is My.txt exits then it write on it otherwise creates this file
    ofs<<"John"<<endl;
    ofs<<"22"<<endl;
    ofs<<"IT";
    ofs.close();
}