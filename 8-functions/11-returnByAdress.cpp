#include<iostream>
using namespace std;
int *fun(){
    int *p = new int[5];   // this will create memory in heap 
    for(int i=0;i<5;i++){    // we acan use it without pointer that stack memory not exist after program ends
        p[i]= 5*i;
    }
    return p;
}
int main(){
    int *q = fun();
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    return 0;
} 
