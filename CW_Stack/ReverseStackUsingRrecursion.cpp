//Reverse stack using recursion
#include <iostream>
#include <stack>
using namespace std;

void displayrev(stack<int>st){
    if(st.empty()){
        return;
    }
    cout<<st.top();
    int x = st.top();
    st.pop();
    displayrev(st);
}



int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
displayrev(s);
    return 0;
}
