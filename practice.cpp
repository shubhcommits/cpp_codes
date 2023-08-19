#include<iostream>
using namespace std;
class Student{
    public:
    // initialing public integers
    int rollNo;
    string name;
    // making static data member
    static int admissionNo;
    // making an constructor
    Student(string n){
        admissionNo++;
        rollNo=admissionNo;
        name=n;
    }
    // Here we initialise a display function to display 
    void display(){
        cout<<"Name "<<name<<endl<<"Roll No "<<rollNo<<endl;
    }
};
// initialising the value of static data member
int Student::admissionNo=0;
int main(){
    int n;
    string nam;
    cout<<"Enter no of student for admission"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter name of student -> "<<endl;
        cin>>nam;
        Student n(nam);
        n.display();
    }
}