// MULTISET

// stores also dublicate elements in sorted order 
#include<bits/stdc++.h>
using namespace std;

void Multiset(){
  multiset<int> ms;
  ms.insert(1);  // {1}
  ms.insert(1);  // {1,1}
  ms.insert(1);  // {1,1,1}

  ms.erase(1); // erase all occurence of 1 in the multiset

  int cnt=ms.count(1);  // returns number of 1 present in the set

  // to delete a single occurence of the elements
  ms.erase(ms.find(1));

  // to erase required number of occurence

  // ms.erase(ms.find(1),ms.find(1)+2);
}