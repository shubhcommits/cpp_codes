// Inner class can access static member of outer class
// Outer class can create object of inner class
// Outer class can access all(public) the members of the class by creating object of that
#include<iostream>
using namespace std;
class Outer{ // This is outer class
    public:
    void fun(){
        i.display();
    }
    public:
    // Here inner class is public
    class Inner{  // This is inner class 
        public:
        void display(){
            cout<<"Inner";
        }
    };
    Inner i; // This object must be created after defining inner class
}; 
int main(){
    Outer o;
    o.fun();
   // Outer::Inner i;  // This is only accessible if inner class is public
}