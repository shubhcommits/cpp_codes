// #include<iostream>
// using namespace std;
// class Rectangle{
//     private : 
//     int length;
//     int breadth;
//     public :
//     void setLength(int l){
//         if(l>=0){
//             length =l;
//         }
//         else{
//             length = 1;
//         }
//     }
//     void setBreadth(int b){
//         if(b>=0){
//             breadth =b;
//         }
//         else{
//             breadth = 1;
//         }
//     }
//     int getLength(){
//         return length;
//     }
//     int getBreadth(){
//         return breadth;
//     }
//     int area(){
//         return length*breadth;
//     }
//     int perimeter();
// };
// int Rectangle::perimeter(){
//     return 2*(length+breadth);
// }
// int main(){
//     Rectangle r;
//     r.setLength(10);
//     r.setBreadth(5);
//     cout<<r.area()<<endl;
//     cout<<r.perimeter();
//     return 0;
// }

/********************************************************************************************/
#include<iostream>
using namespace std;
class Rectangle{
    private : 
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;};
    int getBreadth(){return breadth;};
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main(){
    Rectangle r(10,10);
    cout<<"Area is "<<r.area()<<endl;
    if(r.isSquare()){
        cout<<"Yes"<<endl;
    }
}
Rectangle::Rectangle(){
    length =1;
    breadth =1;
}
Rectangle::Rectangle(int l,int b){
    length =l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l){
    length =l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length == breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Detroyed";
}