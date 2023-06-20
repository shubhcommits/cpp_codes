#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l=0,int b=0){
        length =l;
        breadth = b;
    }
    int getLength(){return length;};
    int getbreadth(){return breadth;};
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};
class Cuboid : public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){return height;}
    int setHeigtht(int h){height = h;}
    int volume(){return getLength()*getbreadth()*getHeight();}

};
void  Rectangle::setLength(int l){
    length =l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}
// int Rectangle::getLength(){
//     return length;
// }
// int Rectangle::getbreadth(){
//     return breadth;
// }
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
int main(){
    Cuboid c(5);
    c.setLength(6);
    c.setBreadth(7);
    cout<<c.volume()<<endl;
}