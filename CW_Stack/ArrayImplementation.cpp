#include <iostream>
using namespace std;

class Stack {
    private:
        const int n = 5;  // Stack size
        int arr[5];  // Array for stack storage
        int idx;  // Top index tracker

    public:
        Stack() { 
            idx = -1;  // Initialize stack as empty
        }

        void push(int val) {
            if (idx == n - 1) {
                cout << "Stack is full" << endl;
            } else {
                arr[++idx] = val;
            }
        }

        void pop() {
            if (idx == -1) {
                cout << "Stack is empty" << endl;
            } else {
                idx--;
            }
        }

        void top() {
            if (idx == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << arr[idx] << endl;
            }
        }

        void size() {
            cout << idx + 1 << endl;
        }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    s.top();   // Should print 5
    s.pop();
    s.top();   // Should print 4
    s.size();  // Should print 3

    return 0;
}
