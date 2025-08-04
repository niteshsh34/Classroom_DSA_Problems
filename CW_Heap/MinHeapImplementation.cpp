//Implementation of MinHeap
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class MinHeap{
    public:
    int idx;
    int arr[50];
    MinHeap()
    {
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        idx++;
        int i = idx;
        while(i>1){
            if(arr[i]<arr[i/2]){
                swap(arr[i],arr[i/2]);
                i = i/2;
            }
            else{
                break;
            }
        }
    }
    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i+1;
            if(left<idx-1){
                break;
            }
            if(right>idx-1){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i = left;
                }
                    break;
            }
            if(arr[left]<arr[right]){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i = left;
                }
                else break;
            }
            else{
            if(arr[right]<arr[i]){
                swap(arr[right],arr[i]);
                i = right;
            }
            else break;
            }

        }
    }
    int size() {
        return idx - 1; 
    }
};
int main(){
    MinHeap mp;
    mp.push(10);
    mp.push(20);
    cout<<mp.top()<<endl;
    cout<<mp.size()<<endl;
    cout<<endl;
    mp.push(11);
    cout<<mp.top()<<endl;
    cout<<mp.size()<<endl;
    cout<<endl;
    mp.pop();
    cout<<mp.top()<<endl;
    cout<<mp.size()<<endl;
    return 0;

}