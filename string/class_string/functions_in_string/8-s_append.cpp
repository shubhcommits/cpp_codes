#include<iostream>
#include<string>
using namespace std;
// int main(){
//     string str="Shubham";
//     str.append(" Maurya");
//     cout<<str;
//     return 0;
// }
int main(){
    string str="Shubham";
    cout<<str.capacity()<<endl;
    str.append("How is all going ndlflkds djfndskln jskdnskjdn djfndsnfkj msm klmd kldnmnklm sdknmn ");
    cout<<str.capacity()<<" "<<str.length();
    return 0;
}