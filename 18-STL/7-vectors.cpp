// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // DECLARATION OF VECTOR
    vector<int> vec;  // this will create an empty container
    vec.push_back(5);  // this will put element in container
    vec.emplace_back(10);  // this is same as push back but faster than it;
    // making vector in pair
    vector<pair<int,int>> v;
    v.push_back({2,5});
    v.emplace_back(5,8);
/*
    vector<int> vi(5,10);  // this is {10,10,10,10,10}  five time 10;
    vector<int> vi(4);  // this is {0,0,0,0};
    vector<int> v1(5,20);
    vector<int> v2(v1);  // v1 will be copied to v2 but a copy of it
    */
    // ACCESSING ELEMENTS OF VECTOR
    // cout<<vec[0];
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    // upper for iterator can be written ass ----->
       for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    // for each loop
    for(int x:vec){
        cout<<x;
    }
} 

// erase function
// {10,20,12,23}
// ve.erase(v.begin()+1);  // this will erase 20 as v.begin() point to 10

// to delete in a range
// {11,25,33,55,66,22}
// v.erase(v.begin()+2,v.begin()+4);   // {11,25,66,22} (start,end) end is not included