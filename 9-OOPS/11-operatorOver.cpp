#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    complex (int r=0,int i = 0){
        real = r;
        img = i;
    }
//    this is a friend function
    // friend complex operator+(complex c1,complex c2);
    friend ostream & operator<<(ostream &out,complex &c);
};
ostream & operator<<(ostream &out,complex &c){
    out<<c.real<<"+i"<<c.img;
    return out;
}
// complex operator+(complex c1,complex c2){
//     complex temp;
//     temp.real = c1.real+c2.real;
//     temp.img = c1.img+c2.img;
//     return temp;
// }
int main(){
    // complex c1(5,3),c2(6,7),c3;
    // c3=c1+c2;
    // cout<<c3;
    complex c(5,3);
    cout<<c<<endl;
    operator<<(cout,c);
}