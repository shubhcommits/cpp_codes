#include<iostream>
using namespace std;
class Complex{
    // private:
    public:
    int real;
    int img;
    public:
    // Complex(int r=0,int i=0){
    //     real = r;
    //     img = i;
    // }
    Complex operator+(Complex x){  
        Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
    }
    
};
int main(){
    // Complex C1(10,22);
    // Complex C2(3,4);
    // Complex C3;
    // // C3 = C1.add(C2);  
    // C3 = C1 + C2;
    // cout<<C1.real;
    Complex c1,c2,c3;
    c1.real = 5;c1.img=6;
    c2.real = 7;c2.img = 8;
    c3 = c1+c2;
    cout<<c3.real<<"+"<<"i"<<c3.img;
}