#include<iostream>
using namespace std;

template< class T>
T Max(T x,T y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}
