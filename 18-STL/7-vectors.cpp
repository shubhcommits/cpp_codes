// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // DECLARATION OF VECTOR
    vector<int> vec;      // this will create an empty container
    vec.push_back(5);     // this will put element in container
    vec.emplace_back(10); // this is same as push back but faster than it;
    // making vector in pair
    vector<pair<int, int>> v;
    v.push_back({2, 5});
    v.emplace_back(5, 8);
    /*
        vector<int> vi(5,10);  // this is {10,10,10,10,10}  five time 10;
        vector<int> vi(4);  // this is {0,0,0,0};
        vector<int> v1(5,20);
        vector<int> v2(v1);  // v1 will be copied to v2 but a copy of it
        */
    // ACCESSING ELEMENTS OF VECTOR
    // cout<<vec[0];
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    /*
        vector<int>::iterator it = vec.end();  // this is pointing next to the last element
        vector<int>::iterator it = vec.rend(); // pointing before first element
        vector<int>::iterator it = vec.rend(); // pointing at last element if we do it++ then it moves towards left

        */

    cout << vec.back(); // last element of the vector

    // upper for iterator can be written ass ----->
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    // for each loop
    for (int x : vec)
    {
        cout << x;
    }
}

// erase function
// {10,20,12,23}
// ve.erase(v.begin()+1);  // this will erase 20 as v.begin() point to 10

// to delete in a range
// {11,25,33,55,66,22}
// v.erase(v.begin()+2,v.begin()+4);   // {11,25,66,22} [start,end) end is not included

/*
// Insert Function
vector<int> v(2, 100);          // {100,100}
v.insert(v.begin(), 300);       // {300,100,100}
v.insert(v.begin() + 1, 2, 10); // {300,10,10,100,100}
// inserting complete vector in vector
vector<int> copy(2, 50);                       // {50,50}
v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

cout << v.size(); // size of the vector

// v1-> {1,2}
// v2-> {3,4}
v1.swap(v2); // v1->{3,4} v2-> {1,2}

// v.clear() // this erase every element of the vector
// v.empty()  // if vector is empty then returns true
*/