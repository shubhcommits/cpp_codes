// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter number of elements";
//     cin>>size;
//     int *p=new int[size];



// delete []p;
// cout<<"Enter new size";
// cin>>size;
// p=new int[size];
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int *p=new int[20];
    delete []p;


    
    p=new int[40];
    return 0;
}