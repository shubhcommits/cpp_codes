#include<iostream>
using namespace std;
class Rectangle{
    // we have made members which contain data as private
    private :    
    int length;
    int breadth;
    // and made the functions as public
    public :
    // we make these functions intelligent to check the data what is given   
    void setLength(int l){   // to  use mutator we have to write setSOMETHING...SET IS USED
        if(l>=0){
            length =l;
        }
        else{
            length = 1;
        }
    }
    // here setBreadth is mutator
    void setBreadth(int b){   
        if(b>=0){
            breadth =b;
        }
        else{
            breadth = 1;
        }
    }
    // here getLength is accesor
    int getLength(){    
        return length;
    }
     // here getBreadth is accesor...
    int getBreadth(){  
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.area()<<endl;
    // to get what is the length is given...
    cout<<"Length is "<<r.getLength();  
}
      // get will give the value of the data member___this is called as ACCESSOR
      // set wil set the value of the data member___this is called as MUTATOR
      // together accessor and mutator is called as property of function    