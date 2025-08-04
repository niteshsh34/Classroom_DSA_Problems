#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>>result;
void add_edges(int src, int des, bool bi_dir = true) {
    graph[src].push_back(des);
    if (bi_dir) {
        graph[des].push_back(src);
    }
}
void dfs(int node, unordered_set<int>&visited) {
    for (auto neighbour : graph[node]) {
        if (visited.find(neighbour) == visited.end()) {
            visited.insert(neighbour);
            dfs(neighbour,visited);
        }
    }
}
int connected_components(int v){
    int result = 0;
    unordered_set<int>visited;
    for(int i = 0;i<v;i++){
        if(visited.find(i) == visited.end()){
            visited.insert(i);
            result++;
            dfs(i,visited);
        }
    }
    return result;
}
int main(){
cout << "Enter number of vertices: ";
    int v;
    cin >> v;
    graph.resize(v);
    cout << "Enter number of edges: ";
    int e;
    cin >> e;
    cout << "Enter " << e << " edges (src dest):\n";
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edges(s, d);
    }
    cout<<connected_components(v);
}