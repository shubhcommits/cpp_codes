#include<iostream>
using namespace std;
class AudiToy{
    public:
    static int Price;
    AudiToy(){
        // Price=999;
    }
    static int getPrice(){
        return Price;
    }
};
int main(){
    cout<<AudiToy::getPrice();  // Without creating an object we can access price
//     AudiToy A;
//     cout<<A.Price;  // This is accessing by creating object
 }
int AudiToy:: Price=200;
