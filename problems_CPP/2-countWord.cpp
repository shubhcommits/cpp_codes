#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s="My namse is Shubham";
    stringstream sr(s);  // this is used for breaking of words i.e, extract individual word from it
    string word;
    int count=0;
    while(sr>>word){  // >> this operator is used to read something from the stringstream
    // >> this operator extract word by word from the sr
    count++;
    }
    cout<<count;
}

// string stream is used to convert integer to string and vice-versa.
// here we use stringstream for the breakdown of sentence into words