#include<iostream>
using namespace std;
int main(){
    pair<int,int> p={1,5};  // we can store values in pair like this
    cout<<p.first<<" "<<p.second<<endl;
    // Nested pair
    pair<int,pair<int,int>> pai={2,{5,5}};
    cout<<pai.first<<" "<<pai.second.first<<" "<<pai.second.second<<endl;
    // pair in array
    pair<int,int> A[]={{1,2},{2,5},{8,9},{4,6}};
    cout<<A[0].first;
}