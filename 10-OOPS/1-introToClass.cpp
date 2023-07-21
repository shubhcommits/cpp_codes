#include<iostream>
using namespace std;
class rectangle {
    public :
    int length;   // here length is taken as variable
    int breadth;  // here breadth is taken as variable
    int area(){    // here is area is taken as function
        return length * breadth;  
    }
    int perimeter(){   //here perimeter is also taken as function as perimeter();
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r1;  
    r1.length = 5;  // we can assign a value to the variable by this method
    r1.breadth = 2;  // we can assign a value to the variable
    cout<<" Area is "<<r1.area()<<endl;  // functions can be call by this method
    cout<<" Perimeter is "<<r1.perimeter();   // functions can be call by this method
    return 0;
}