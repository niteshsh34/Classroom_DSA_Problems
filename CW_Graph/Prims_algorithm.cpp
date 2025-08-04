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

ll prims(int src, int n) {
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_map<int,int> mp;
    unordered_set<int> visited;
    vector<int> parent(n);
    for(int i = 0; i < n; i++) {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    int total_count = 0;
    ll result = 0;

    while(total_count < n && !pq.empty()) {
        pp curr = pq.top();
        pq.pop();               
        int node = curr.second;
        int weight = curr.first;

        if(visited.count(node)) {
            continue;            
        }

        visited.insert(node);
        total_count++;
        result += weight;

        for(auto neighbour : graph[node]) {
            int next_node = neighbour.first;
            int next_wt = neighbour.second;
            if(!visited.count(next_node) && mp[next_node] > next_wt) {
                pq.push({next_wt, next_node});
                parent[next_node] = node;
                mp[next_node] = next_wt;
            }
        }
    }
    return result;
}

int main() {
    cout<<"Enter : -";
    int n, m;
    cin >> n >> m;

    graph.resize(n);

    for(int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edges(u, v, wt);
    }

    int src;
    cin >> src;

    cout << prims(src, n) << "\n";

    return 0;
}
