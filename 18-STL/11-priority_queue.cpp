// stores all these not linearly stores as a tree
#include <bits/stdc++.h>
using namespace std;
#include <queue>
void priorityQueue()
{
  // Max Heap
  priority_queue<int> pq;
  pq.push(5);     // {5}
  pq.push(2);     // {5,2}
  pq.push(8);     // {8,5,2}
  pq.emplace(10); // {10,8,5,2}

  cout << pq.top(); // prints 10
  pq.pop();         // {8,5,2}
  // size swap empty function all same as queue

  // Min Heap  // minimum at top
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(5);     // {5}
  pq.push(2);     // {2,5}
  pq.push(8);     // {2,5,8}
  pq.emplace(10); // {2,5,8,10}

  cout << pq.top(); // prints 2
}

// TC ->    push,pop->O(n)  and  top->O(1)