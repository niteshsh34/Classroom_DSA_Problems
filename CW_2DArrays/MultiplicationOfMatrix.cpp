#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and columns :- ";
    cin>>m>>n;
    //Matrix1
    int arr1[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr1[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 1
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr1[i][j]<<"      ";
    }
    cout<<endl;
    }
    //Matrix 2
    int arr2[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr2[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 2
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr2[i][j]<<"      ";
    }
    cout<<endl;
    }
//Finding sum
int mul[m][n];
    cout<<"Enter elements:- ";
    
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            mul[i][j] = 0;
            for(int k = 0; k<n ; k++)
            mul[i][j] = mul[i][j] + (arr1[i][k]*arr2[k][j]);
            }
    cout<<endl;
    }
    //printing Multiplication
    cout<<"Mul:- "<<endl;
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<mul[i][j]<<"  ";
    }
    cout<<endl;
    }

}