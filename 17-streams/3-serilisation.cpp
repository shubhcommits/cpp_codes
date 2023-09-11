// serilisation is storing and retriving data in file
#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs,Student &s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
};
ifstream & operator>>(ifstream &ifs,Student &s){
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}
      ofstream & operator<<(ofstream &ofs,Student &s){
        ofs<<s.name<<endl;
        ofs<<s.roll<<endl;
        ofs<<s.branch<<endl;
        return ofs;
}
// writing in file
// int main(){
//     Student s1;
//     s1.name="Sachin"; s1.roll=5; s1.branch="IT";
//     ofstream ofs("Student.txt",ios::trunc);
//         // ofs<<s1.name<<endl;
//         // ofs<<s1.roll<<endl;
//         // ofs<<s1.branch<<endl;
//         ofs<<s1;
// }

/***************************************************/

// Reading from file
int main(){
    Student s1;
    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<"name"<<" "<<s1.name<<endl;
    cout<<"roll"<<" "<<s1.roll<<endl;
    cout<<"branch"<<s1.branch;
    ifs.close();
}