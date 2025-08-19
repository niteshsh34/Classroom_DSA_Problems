#include <iostream>
using namespace std;

void permutations(string input, string output) {
    if (input.size() == 0) {
        cout << output << "\n";
        return;  
    }
    for (int i = 0; i < input.size(); i++) {
        char ch = input[i];
        string left = input.substr(0, i);
        string right = input.substr(i + 1);
        string r = left + right;
        permutations(r, output + ch);
    }
}

int main() {
    cout << "Enter string: ";
    string s;
    cin >> s;

    permutations(s, "");  
    return 0;
}
