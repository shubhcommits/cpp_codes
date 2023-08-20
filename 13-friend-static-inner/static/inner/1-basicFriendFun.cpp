#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend int main();
};
int main(){
    Test t;
   // t.a=10; // not sccessible
   // t.b=20; // not accessible
   t.a=10;  // this is now accessible because class friend function is declared
   t.b=20;  // this is now accessible because class friend function is declared
    t.c=30;
}
// friend function id a global funcyion outside function which can access all items of class upon object
