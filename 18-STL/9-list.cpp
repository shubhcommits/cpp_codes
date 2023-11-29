#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(5);

    ls.push_front(9);  // we can also push in front in list
    ls.emplace_front(11);

    // all other functions of list are same as the vector 
    // begin(),end,clear,insert,size,swap
}

// deque<int> dq;  // dequeue is similar to list and vector