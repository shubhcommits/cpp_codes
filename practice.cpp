#include<iostream>
using namespace std;
class Complex{
    public:
    int img;
    int real;
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.real = 5;
    c1.img = 3;
    c2.real = 7;
    c2.img = 15;
    c3=c1+c2;
    cout<<c3.real<<"+"<<c3.img<<endl;
    return 0;
}