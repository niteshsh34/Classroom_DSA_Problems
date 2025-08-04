#include <iostream>
using namespace std;

class A {
public:
    void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        cout << "After swapping: " << a << " , " << b << endl;
    }

    void swap(char p, char q) {
        char temp = p;
        p = q;
        q = temp;
        cout << "After swapping: " << p << " , " << q << endl;
    }

    void swap(float m, float n) {
        float temp = m;
        m = n;
        n = temp;
        cout << "After swapping: " << m << " , " << n << endl;
    }
};

int main() {
    A ob;
    int choice;
    
    do {
        cout << "Menu:\n";
        cout << "1. Swap integers\n";
        cout << "2. Swap characters\n";
        cout << "3. Swap floats\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                int a, b;
                cout << "Enter two integer values: ";
                cin >> a >> b;
                ob.swap(a, b);
                break;
            }
            case 2: {
                char p, q;
                cout << "Enter two character values: ";
                cin >> p >> q;
                ob.swap(p, q);
                break;
            }
            case 3: {
                float m, n;
                cout << "Enter two float values: ";
                cin >> m >> n;
                ob.swap(m, n);
                break;
            }
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << endl;
        
    } while (choice != 4);

    return 0;
}