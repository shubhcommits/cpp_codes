#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;
public:
Rectangle();  //This is non paramaterise constructor
Rectangle(int l,int b);
int getLength(){return length;}
int getBreadth(){return breadth;}
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
    height=h;
}
int getHeight(){return height;}
void setHeight(int h){height =h;}
int volume(){return getLength()*getBreadth()*height;}
};
int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(5);
    cout<<c.volume();

}
Rectangle::Rectangle(){
    length =1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b){
    length=l;
    breadth=b;
}
void Rectangle::setLength(int l){
    length=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}