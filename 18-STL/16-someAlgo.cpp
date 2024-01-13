#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return false;
  // if they are same
  if(p1.first>p2.first) return true;
  return false;
}

void someFunc(){
  sort(a,a+n);  // [a,a+n)  a is included but a+n is not
  sort(v.begin(),v.end());

  sort(a+2,a+4);  // from [a+2,a+4) this is sorted

  sort(a,a+n,greater<int>); // sorting in descending order

  pair<int,int> a[]={{1,2},{2,1},{4,1}};
  //SORTING IN MY WAY
  // sort it according to second element
  // if second element is same then sort it according to first element but in descendiong order
  sort(a,a+n,comp);  // the comp functio is written as bool

  int num=7;
  int cnt=__builtin_popcount(num);  // this gives count of number of set bits that is 1

  long long num=136524635897;
  int cnt=__builtin_popcountll(num);  // this for long long numbers

  // permutations
  string a='123';
  sort(s.begin(),s.end());
  do{
    cout<<s<<endl;
  }while(next_permutation(s.begin(),s.end()));  // if no next permutations then returns false and loop breaks

  int maxi=*max_element(a,a+n);  // [a,a+n)  this (a+n) index is excluded while finding
  int maxi=*min_element(a,a+n);
}