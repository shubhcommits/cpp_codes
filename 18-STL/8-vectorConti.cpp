#include<bits/stdc++.h>
using namespace std;
int main(){
    // INSERT FUNCTION
vector<int> vv(2,100); // {100,100}
vv.insert(vv.begin(),300); // {300,100,100}
vv.insert(vv.begin()+1,2,25); // {300,25,25,100,100}

vector<int> c(2,50); // {50,50}
vv.insert(vv.begin(),c.begin(),c.end());   // {50,50,300,25,25,100,100}  // this will copy one vector into another

// to check the size of the vector
cout<< vv.size();

vv.pop_back();  // remove last elemnt from the vector

// v1 -> {10,20}
// v2 -> {30,40}
// v1.swap(v2)     // v1 -> {30,40}, v2 -> {10,20};

vv.clear();  // erase all the elemnts in the vector

cout<<vv.empty(); // check whether the vector is empty or not

}