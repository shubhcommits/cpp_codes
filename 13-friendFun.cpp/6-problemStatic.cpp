#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    static int admissionNo;
    Student(){
        admissionNo++;
        rollNo=admissionNo;
    }
};
int Student::admissionNo=0;
int main(){
    int n,name,StudentName;
    cout<<"Enter the number of student taking admission"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        Student n;
        cout<<"Roll no of student "<<n.admissionNo<<" is "<<n.rollNo<<endl;
    }
}
// The use of static data member is to access single data member by different data member