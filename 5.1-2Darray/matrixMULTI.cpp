//in matrix multiplications columns of first matrix should be equal to the rows of second matrix
#include<iostream>
using namespace std;
int main(){
    int A[10][10],B[10][10],C[10][10];
    int n,k,i,j;
    cout<<"Enter the rows or column of square matrix";
    cin>>n;
    cout<<"Enter elements of first matrix";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter elements of second matrix";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j]=0;
            for(k=0;k<n;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
         cout<<endl;
    }
    
    return 0;
}