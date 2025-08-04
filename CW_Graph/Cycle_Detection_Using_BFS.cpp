#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
#include <queue>
using namespace std;
int v;
vector<list<int>> graph;
unordered_set<int> visited;
void add_edges(int src, int des, bool bi_dir)
{
    graph[src].push_back(des);
    if (bi_dir)
    {
        graph[des].push_back(src);
    }
}
bool dfs(int src, int par, unordered_set<int> &vis){
    vis.insert(src);
    for (auto neighbour : graph[src]){
        if (vis.count(neighbour) && neighbour != par){
            return true;
        }
        if (!vis.count(neighbour)){
            dfs(neighbour, src, vis);
        }
    }
    return false;
}
bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for (int i = 0; i < v; i++){
        if(!vis.count(i)){
        result = dfs(i,-1,vis);
        if(result == true) return true;
    }
}
    return false;
}
int main()
{
    int e;
    cout << "Enter number of vertices and edges : ";
    cin >> v;
    graph.resize(v,list<int>());
    cin >> e;
    cout << "Enter edges:- ";
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edges(x, y, false);
    }
    bool res = has_cycle();
    cout<<"Cycle detected";
    return 0;
}