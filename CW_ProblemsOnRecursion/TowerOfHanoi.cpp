#include <iostream>
using namespace std;
void towerOfHanoi(int n, char sor, char des,
            char help)
{
    if (n == 0) return;
    towerOfHanoi(n - 1, sor, help, des);
    cout << "Move disk " << n << " from rod " << sor
        << " to rod " << des << endl;
    towerOfHanoi(n - 1, help, des, sor);
}
int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'B', 'C');
    return 0;
}

