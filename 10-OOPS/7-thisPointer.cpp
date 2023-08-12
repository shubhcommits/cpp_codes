#include<iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length,int breadth){
        this->length = length;   // this is to refer to data member of same object this pointer is used
        this->breadth = breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r(10,5);
    cout<<"Area is "<<r.area();
    return 0;
}