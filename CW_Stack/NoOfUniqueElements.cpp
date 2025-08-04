//Count no of unique elements in an array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3,4};
    int n = 6;
    int i = 0;
    int k = 1;
    while(i<n-1){
        if(arr[i + 1] != arr[i]){
            k++;
        }
        i++;
    }
    cout<<"No of unique elements = "<<k;
    return 0;
}
