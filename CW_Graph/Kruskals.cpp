#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, e;
int find(vector<int>& parent, int x) {
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);
    if (rank[a] > rank[b]) {
        parent[b] = a;
    } else if (rank[a] < rank[b]) {
        parent[a] = b;
    } else {
        parent[b] = a;
        rank[a]++;
    }
}

struct Edge {
    int src;
    int des;
    int wt;
};

bool cmp(Edge e1, Edge e2) {
    return e1.wt < e2.wt;
}

ll krushkals(vector<Edge>& input) {
    sort(input.begin(), input.end(), cmp);
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    int edgeCount = 0;
    int i = 0;
    ll ans = 0;
    while (edgeCount < n - 1 && i < input.size()) {
        Edge curr = input[i];
        int srcPar = find(parent, curr.src);
        int desPar = find(parent, curr.des);
        if (srcPar != desPar) {
            Union(parent, rank, srcPar, desPar);
            ans += curr.wt;
            edgeCount++;
        }
        i++;
    }
    return ans;
}

int main() {
    cout << "Enter no of vertices and edges:- ";
    cin >> n >> e;
    vector<Edge> input(e);
    cout << "Enter edges (src des wt):\n";
    for (int i = 0; i < e; i++) {
        cin >> input[i].src >> input[i].des >> input[i].wt;
    }
    ll result = krushkals(input);
    cout << "Minimum cost to connect all vertices = " << result << endl;
    return 0;
}
