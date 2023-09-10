#include<iostream>
using namespace std;
class Demo{
    private:
    int *p;
    public:
    Demo(){
        p=new int[10];
        cout<<"Constructor"<<endl;
    }
    ~Demo(){
        delete []p;
        cout<<"Destructor";
    }
};
void fun(){
    // Demo d;
    Demo *p=new Demo();
    delete p;
}
int main(){
    fun();
}