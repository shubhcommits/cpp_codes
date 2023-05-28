// #include<iostream>
// using namespace std;
// int main(){
//     int A[]={1,2,3,9,9};
//     for(int i=0;i<=5;i++){
//         cout<<A[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int A[]={2,58,2,6,4,11,5};
//     for(int x:A){  //this loop is called for each loop
//     cout<<x<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     char A[]={'a',99,105,65,'S'};
//     for(auto x:A){  // THIS AUTO FEATURE DECLARE DATA TYPE AS IT WAS
//         cout<<x<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    char A[]={'a',99,105,65,'S'};
    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}