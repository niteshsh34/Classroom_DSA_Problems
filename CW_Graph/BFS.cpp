#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>
#include <queue>
#include<climits>
#include <algorithm>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
void add_edges(int src, int des, bool bi_dir = true) {
    graph[src].push_back(des);
    if (bi_dir) {
        graph[des].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto a : graph[i]) {
            cout << a << ", ";
        }
        cout << endl;
    }
}

void bfs(int src,vector<int>&dis) {
    queue<int>qu;
    qu.push(src);
    visited.clear();
    visited.insert(src);
    qu.push(src);
    dis[src] = 0;
    while(!qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
    for (auto neighbour : graph[curr]) {
        if (visited.find(neighbour) == visited.end()) {
            qu.push(neighbour);
            visited.insert(neighbour);
            dis[neighbour] = dis[curr] + 1;
        }
    }
}
cout<<"\n";
}

int main() {
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
    
    display();

    int st;
    cout << "Enter start : ";
    cin >> st ;
    visited.clear();
    vector<int>dis;
    dis.resize(v,INT_MAX);
    bfs(st,dis);
    for(int i = 0;i<dis.size();i++){
        cout<<dis[i];
    }
    return 0;
}
