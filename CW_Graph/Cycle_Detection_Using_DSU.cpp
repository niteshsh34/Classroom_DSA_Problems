#include <iostream>
#include <vector>
using namespace std;
int Parent(vector<int> &parent, int x)
{
    if (parent[x] == x)
        return parent[x] = x;
    else
        return Parent(parent,parent[x]);
}
bool Union(vector<int> &parent, vector<int>&rank, int a, int b)
{
    a = Parent(parent, a);
    b = Parent(parent, b);
    if(a == b) return true;
    if (rank[a] > rank[b])
    {
        rank[a]++;
        ;
        parent[b] = a;
    }
    else
    {
        rank[b]++;
        parent[a] = b;
    }
    return false;
}
int main()
{
    int v, e;
    cout << "Enter number of vertices and edges : ";
    cin >> v;
    cin >> e;
    vector<int> parent(v + 1);
    vector<int> rank(v + 1, 1);
    for (int i = 0; i <= v; i++)
    {
        parent[i] = i;
    }
    cout << "Enter edges:- ";
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        bool b = Union(parent, rank, x, y);
        if(b == true) cout<<"Cycle detected";
    }
    return 0;
}