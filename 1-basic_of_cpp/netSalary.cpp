#include<iostream>
using namespace std;
int main(){
    float netsalary,basicsalary,perallowence,perdeduction;
    cout<<"Enter basic salary,percentage allowence,percentage deduction";
    cin>>basicsalary>>perallowence>>perdeduction;
    netsalary=basicsalary+basicsalary*perallowence/100-basicsalary*perdeduction/100;
    cout<<"The net salary is"<<netsalary;
    return 0;
}