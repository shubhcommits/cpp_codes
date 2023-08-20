#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    int b;
    public:
    static int count;     // To define static data member
    Test(){
        a=10;
        b=10;
        count++;
    }
};
int Test::count=0;
//static member in a class belongs to a class not to an specified object and all the objects can access it
int main(){
    Test t1;
    Test t2;
    // Lower three lines gives same message as same static data member access by all
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;  // static data member can be access by objects
    cout<<Test::count;  // static data member can be access by class
}