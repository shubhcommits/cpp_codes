#include<iostream>
using namespace std;
class MyException1:exception{

};
class MyException2:public MyException1{

};
int main(){
    try{
        throw MyException1();
    }
    catch(MyException2 e){  // frst child class error should executed
        cout<<"This is MyException1 error";
    }
    catch(MyException1 e){
        cout<<"This is MyException2 error";
    }
    catch(...){
        cout<<"catch all handler";  // catch all handler must come at last
    }
}
