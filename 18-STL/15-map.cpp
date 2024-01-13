// map stores unique keys in sorted order values can be dublicate
#include<bits/stdc++.h>
using namespace std;
// map TC -> log(n)  // not unordered
void Map(){
  map<int,int> mpp;
  // map<int,pair<int,int>> mpp;  // this ways can also be stored
  // map<pair<int,int>,int> mpp;

  mpp[1]=2; // at key value 1 2 is stored 
  // mpp.emplace({3,1}); // at key 3,   1 is stored  // err
  mpp.insert({2,4});  // at key 2 4 is stored
  // mpp[{2,3}]=10; // at key {2,3}   10 is stored 

  // iterating in map
  for(auto it:mpp){
    cout<<it.first<<" "<<it.second;
  }

  cout<<mpp[1];  // print the value at key 1

  // auto it=mpp.find(3);  // if 3 is not there then points to the end->next iin the map
  // cout<<*it.second;

  // lower_bound() and upper_bound()
  auto it=mpp.lower_bound(2);
  auto it=mpp.upper_bound(3);
  // erase,swap,size,empty are same
}

// multimap  ->  this stores also dublicate elements and in sorted order

// unordered_map   ->  stores dublicate keys bot not in any order
// unordered_map   // TC-> O(1) in almost all the cases only rare case it is O(n)