#include<iostream>
using namespace std;
class rectangle {
    public :
    int length;
    int breadth;
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
/*
int main(){
    rectangle r;
    rectangle *ptr;
    ptr = &r;
    ptr ->length = 5;  // this is the method to assign value to variable through pointer(->) this sign is used
    ptr ->breadth = 2;
    cout<<"Area is "<<ptr ->area()<<endl;
    cout<<"Perimeter is "<<ptr ->perimeter()<<endl;

}
*/

// object in heap
int main(){
    rectangle *ptr=new rectangle;  // this is an method of creating an object in an heap    
    ptr ->length = 5;
    ptr ->breadth = 2;
    cout<<"Area is "<<ptr ->area()<<endl;
    cout<<"Perimeter is "<<ptr ->perimeter()<<endl;

}