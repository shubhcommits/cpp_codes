// Set store UNIQUE element and everything in the SORTED order
// stores all these not linearly stores as a tree
#include <bits/stdc++.h>
using namespace std;
void Set(){
  set<int> st;
  st.insert(1);  // {1}
  st.insert(2);  // {1,2}
  st.insert(2);  // {1,2}
  st.insert(4);  // {1,2,4}
  st.emplace(3);  // {1,2,3,4} 
  // begin(),end,,rbegin(),rend(),size(),empty(),swap all are same as vector

  // {1,2,3,4}
  auto it=st.find(3);  // this gives iterator pointing to the 3
  // if three is not found in the set then it points to next to the last element

  st.erase(4);  // deletes 4 and maintains the sortedd order
  // elements or iteratir both can be given for erase
  // erase [start,end) erase similar to the vector

  int cnt=st.count(1); // if exits then gives 1 else 0 as set contains only unoque elements

  // lower_bound() and upper_bound()
  auto it=st.lower_bound(2);
  auto it=st.upper_bound(4);
  // this lower bound and upper bound also works on the vector

}

// In set every thing happens in (logn TC)