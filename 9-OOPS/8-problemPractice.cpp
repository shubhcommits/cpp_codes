#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    int physicsMarks;
    int chemistryMarks;
    int mathsMarks;
    public:
    student(int r,string n,int p,int c,int m){
        roll = r;
        name = n;
        physicsMarks = p;
        chemistryMarks = c;
        mathsMarks =m;
    }
    int total(){
        return physicsMarks+chemistryMarks+mathsMarks;
    }
    char grade(){
        float average = total()/3;
        if(average>60){
            return 'A';
        }
        else if(average>=40&&average<60){
            return 'B';
        }
        else{
            return 'C';
        }
    }
};
int main(){
    int roll;
    string name;
    int p,c,m;
    cout<<"Enter the roll no of student"<<endl;
    cin>>roll;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the marks of the three subject";
    cin>>p>>c>>m;
    student s(roll,name,p,c,m);
    cout<<"Total marks "<<s.total()<<endl;
    cout<<"Grade of student "<<s.grade();
    return 0;
}