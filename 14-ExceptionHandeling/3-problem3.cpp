#include<iostream>
using namespace std;
class MyException1:exception{

};
class MyException2:public MyException1{  // this class inheriting from my exception1

};
int main(){
    try{
        // throw 1.5;  // this is double
        throw 'a';  // change the type of throw different catch will executed
    }
    catch(int e){  // this catch is type of integer
        cout<<"Int catch";
    }
    // multiple catch can be created for a single try
    catch(double e){  // this catch is type of double 
        cout<<"Double catch"; 
    }
    // catch(char e){  // this is catch of type char
    //     cout<<"Char catch";
    // } 
    catch(...){  // this can be used for any type of throw
    // this is should be ignored and individiual catch should be created for giving exact error
        cout<<"All catch";
    }

} 