#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,5,2,3,4};
    v.push_back(30);  // this will push an element at the end
    v.push_back(10);
    cout<<"using iterator"<<endl;
    vector<int>::iterator itr;  // this is using iterator 
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<++*itr<<" ";  // dereferencing
        // by ++ we can modify these values 
    }
    cout<<endl;
    cout<<"using for each loop"<<endl;
    for(int x:v){  // this is using for each loop to print elements
        cout<<x<<" ";
    }
}