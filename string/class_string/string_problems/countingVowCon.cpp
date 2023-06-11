#include<iostream>
#include<string>
using namespace std;
int main(){
    int countV=0,countC=0,countW=1;
    string str="who     are you";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'
        ||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            countV++;
        }
        else if(str[i]==' '){
            while(str[i] ==' '){
                i++; // there is doubt
            }
            countW++;
        }
        else{
            countC++;
        }
    }
    cout<<"No of vowels are "<<countV<<endl;
    cout<<"No of consonants are "<<countC<<endl;
    cout<<"No of words are "<<countW<<endl;
    return 0;
}