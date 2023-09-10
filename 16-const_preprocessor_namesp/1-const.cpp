#include<iostream>
using namespace std;
// int main(){
//     const int x=5;
//     // x++;  // this can not be performed a const value can not be modified
//     cout<<x;
// }

/***********************************************************************************/

/*
// pointer constant
int main(){
    int x=5;
    const int *p=&x;  // this is a pointer constant on type integer  --> data can not be modified but address can be modified
    // int const *p=&x;  // like this also can be written
    // ++*p;  // a pointer constant can not be modified only can be read
    int y=10;
    p=&y;
    // ++*p;  // this can also not be performed
    cout<<x<<" "<<*p;
}*/
// a poiter to a data can not be modified but it can point on any data

/***********************************************************************************/

/*
// constant pointer
int main(){
    int x=5,y=10;
    int *const p=&x;
    ++*p;  // this can be performed
    // p=&y;  // this can not be performed
    cout<<*p;
}*/

/***********************************************************************************/

/*
int main(){
    int x=5,y=10;
   const int *const p=&x;
   // here data and point to address both can not be modified
    // ++*p;
    // p=&y;  
    cout<<*p;
}*/

/**********************************************************/

/*
class Demo{
    public:
    int x=10;
    int y=20;
    void Display() const {  // by writing here const data in this function can not be modified
        // x++;
        cout<<x<<" "<<y;
    }
};
int main(){
    Demo d;
    d.Display();
}*/

/**********************************************************/

void fun( const int &x,int &y){
    // x++; // this can not be implemented by writing const in above
    cout<<x;
}
int main(){
    int a=5,b=10;
    fun(a,b);
}