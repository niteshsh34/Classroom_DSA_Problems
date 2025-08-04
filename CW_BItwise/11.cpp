#include<iostream>
using namespace std;
int main() {
	int x = 6;
	int  k= x;
	int temp;
	while(x!=0) {
		temp = x;
		x = x&(x-1);
	}
	temp = temp<<1;
	temp = temp -1;
	int m= temp^k;
	cout<<m;
	return 0;
}