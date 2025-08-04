#include <iostream>
using namespace std;

int main() {
    // Define and initialize a string with proper syntax
    char str[] = "abcdefg";

    // Declare a pointer to char and initialize it with the address of str
    char *ptr = str;

    // Move the pointer 5 characters ahead
    ptr += 5;

    // Output the substring starting from the new pointer position
    cout << ptr << endl;
return 0;
}