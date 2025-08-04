#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(10);
    s.insert(5);
    if (s.find(15) == s.end())
    {
        cout << "Not Found" << endl;
    }
    else
        cout << "Found";
    cout << endl;
    for (int ele : s)
    {
        cout << ele << " ";
    }
    return 0;
}