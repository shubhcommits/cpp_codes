#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    int b;
    public:
    static int count;  // this  is static data member
    Test(){  // this is constructor
        a=10;
        b=20;
        count++;
    }
    static int getfun(){  //THIS IS HERE STATIC FUNCTION
        //a++;  // static function member can access only static member of a class
        return count;
    }   
};
int main(){
    Test t1;
    Test t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<t1.getfun()<<endl;  //WE ACCESSING STATIC FUNCTION BY USING OBJECT
    cout<<Test::getfun(); //WE CAN ALSO ACCESS STATIC FUNCTION BY USING CLASS NAME
}
int Test::count=0;

// by declaring static member function SINGLE DATA MEMBER or static function can be access by different objects