#include<iostream>
#include<set>  // set will have only unique value in it
using namespace std;
int main(){
    set<int> v={1,5,2,3,4,30};
    v.insert(30);  // this will push an element at the end
    v.insert(10);
    cout<<"using iterator"<<endl;
    set<int>::iterator itr;  // this is using iterator 
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";  // dereferencing
        // by ++ we can not modify these values in set  
    }
    cout<<endl;
    cout<<"using for each loop"<<endl;
    for(int x:v){  // this is using for each loop to print elements
        cout<<x<<" ";
    }
}