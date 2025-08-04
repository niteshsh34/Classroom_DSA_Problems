#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int n = 5; 
    int x = 1; 
		while (x <= n) { 
			x <<= 1; 
		} 
		x--; 
		int m = (x ^ n); 
	cout << m;
	return 0; 
    /*// CPP program to invert actual bits  M2
// of a number. 
#include <bits/stdc++.h> 
using namespace std; 

void invertBits(int num) 
{ 
	// calculating the mask 
	int x = num;	 // say num = 100000 
	x |= x >> 1; // 100000 | 010000 = 110000 
	x |= x >> 2; // 110000 | 001100 = 111100 
	x |= x >> 4; // 111100 | 000011 = 111111 
	x |= x >> 8; // 111111 | 000000 = 111111 
	x |= x >> 16; // 111111 | 000000 = 111111 

	cout << (num ^ x); // 100000 | 111111 = 011111 
} 

// Driver code 
int main() 
{ 
	int num = 11; 
	invertBits(num); 
	return 0; 
} 
*/
}
