#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    string name;
    public:
    employee(int i,string n){
        id=i;
        name=n;
    }
    int getId(){return id;}
    string getName(){return name;}
};
class FullTimeEmployee:public employee{
    private:
    int salary;
    public:
    FullTimeEmployee(int i,string n,int sal):employee(i,n){
        salary =sal;
    }
    int getSalary(){return salary;}
};
class PartTimeEmployee:public employee{
    private:
    int wage;
    public:
    PartTimeEmployee(int i,string n,int w):employee(i,n){
        wage =w;
    }
    int getSalary(){return wage;}
};
int main(){
    FullTimeEmployee s1(5,"shubham",100000);
    PartTimeEmployee s2(6,"John",60000);
    cout<<"Salary of "<<s1.getName()<<" is "<<s1.getSalary()<<endl;
    cout<<"Salary of "<<s2.getName()<<" is "<<s2.getSalary()<<endl;
}
