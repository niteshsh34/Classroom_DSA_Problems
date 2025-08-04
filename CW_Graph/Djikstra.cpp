#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp pair<int,int>

vector<list<pp>> graph;

void add_edges(int src, int des, int wt, bool bi_dir = true) {
    graph[src].push_back({des, wt});
    if (bi_dir) {
        graph[des].push_back({src, wt});
    }
}

unordered_map<int,int> djikstra(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_map<int,int> mp; // Distance map
    unordered_set<int> visited;
    
    for(int i = 0; i < n; i++) {
        mp[i] = INT_MAX;
    }

    pq.push({0, src});
    mp[src] = 0;

    while(!pq.empty()){
        pp curr = pq.top();
        pq.pop();
        int node = curr.second;
        int dist = curr.first;

        if(visited.count(node)) continue;
        visited.insert(node);

        for(auto& neighbour : graph[node]){
            int adjNode = neighbour.first;
            int edgeWeight = neighbour.second;
            if(mp[adjNode] > dist + edgeWeight){
                mp[adjNode] = dist + edgeWeight;
                pq.push({mp[adjNode], adjNode});
            }
        }
    }

    return mp;
}

int main(){
    cout << "Enter number of nodes and edges: ";
    int n, m;
    cin >> n >> m;

    graph.resize(n);

    cout << "Enter edges (u v weight):" << endl;
    for(int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edges(u, v, wt);
    }

    int src;
    cout << "Enter source node: ";
    cin >> src;

    unordered_map<int,int> ans = djikstra(src, n);

    cout << "\nShortest distances from node " << src << ":\n";
    for(int i = 0; i < n; i++) {
        cout << "Node " << i << " : ";
        if(ans[i] == INT_MAX)
            cout << "Unreachable" << endl;
        else
            cout << ans[i] << endl;
    }

    return 0;
}
