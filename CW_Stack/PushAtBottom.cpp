#include <iostream>
#include <stack>
using namespace std;
void pushAtBottom(stack<int> &s, int x) {
    stack<int> temp;
    // Move all elements from s to temp
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    // Push the new element at bottom
    s.push(x);
    // Move all elements back from temp to s
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Stack before pushing 6 at bottom: ";
    printStack(s);

    // Push 6 at the bottom
    pushAtBottom(s, 6);

    cout << "Stack after pushing 6 at bottom: ";
    printStack(s);

    return 0;
}
