#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and columns :- ";
    cin>>m>>n;
    //Matrix1
    int arr[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 1
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<"   ";
    }
    cout<<endl;
    }
    // Spiral
    int  minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        //right
for(int j = minc;j<=maxc;j++){
        cout<<arr[minr][j]<<" ";
    }
    minr++;
if(minr>maxr || minc>maxc) break;
// down
for(int i=minr;i<=maxr;i++) {
cout<<arr[i][maxc]<<" ";
}
maxc--;
if(minr>maxr || minc>maxc) break;
// left
for(int j=maxc;j>=minc;j--){
cout<<arr[maxr][j]<<" ";
}
maxr--;
if(minr>maxr || minc>maxc) break;
// up
for(int i=maxr;i>=minr;i--){ cout<<arr[i][minc]<<" ";
}
minc++;
}
}
