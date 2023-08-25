#include<iostream>
using namespace std;
class Pallindrome{
    private:
    int x=134;
    int r;
    public:
    int m=x;
    int rev=0;
    void isPallindrome(){
            while(x!=0){
                r=x%10;
                x=x/10;
                rev=rev*10+r;
            }
            if(m==rev){
                cout<<"true";
            }
            else{
                cout<<"false";
            }
    }
};
int main(){
    Pallindrome p;
    p.isPallindrome();
}