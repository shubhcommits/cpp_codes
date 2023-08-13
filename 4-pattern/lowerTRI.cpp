// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"Enter number of rows and column";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of rows and column";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}


