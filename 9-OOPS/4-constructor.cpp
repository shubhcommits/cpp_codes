#include<iostream>
using namespace std;
class Rectangle{
    private :
    int length;
    int breadth;
    public :
    // this is an non paramaterized constructor
    /*
    // a constructor is a function which will have same name as class name
    they will not have any return type it has same name as class name
    Rectangle(){     
        length = 0;
        breadth = 0;
    }
    */
   // this is an paramaterized constructor
    Rectangle(int l=0,int b=0){      
    // by giving value =0 this willact as both non paramaterized and paramaterized constructor
        setLength(l);
        setBreadth(b);
    }
    // this is an copy constructor
    Rectangle(Rectangle &r){    
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l){
        if(l>0){
            length = l;
        }
        else{
            length = 0;
        }
    }
    void setBreadth(int b){
        if(b>0){
            breadth = b;
        }
        else{
            breadth = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
   Rectangle r1(10,5);
   Rectangle r2(r1);
   cout<<"Area is "<<r1.area()<<endl;
   // here r2 copied data from r1
   cout<<"Area is "<<r2.area()<<endl;  
   return 0;
}