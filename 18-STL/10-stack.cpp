#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.emplace(9);

    cout<<st.top(); // 9 which is pushed at last as LIFO

    st.pop();  // removes last entered element
    cout<<st.size();
    cout<<st.empty(); // if st not empty then print False

    stack<int> st1,st2;
    st1.swap(st2);  // both stack will be swapped

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);  // {1,2,3,4}

    q.back() += 5; 
    cout<<q.back();  // prints 9 that is added to last element

    cout<<q.front(); // printed the first entered element // FIFO

    // size,swap,empty are same as stack

    // PRIORITY QUEUE

}