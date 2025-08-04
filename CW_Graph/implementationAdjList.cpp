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

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto a : graph[i]) {
            cout << a << ", ";
        }
        cout << endl;
    }
}

// bool dfs(int curr, int end) {
//     if (curr == end) return true;
//     visited.insert(curr);

//     for (auto neighbour : graph[curr]) {
//         if (visited.find(neighbour) == visited.end()) {
//             bool result = dfs(neighbour,end);
//             if(result) return true;
//         }
//     }
//     return false;
// }
bool dfs(int curr, int end) {
    if (curr == end) return true;
    visited.insert(curr);

    for (auto neighbour : graph[curr]) {
        if (visited.find(neighbour) == visited.end()) {
            bool result = dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
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


    int st, end;
    cout << "Enter start and end vertices to check path: ";
    cin >> st >> end;
    visited.clear();
    if (dfs(st, end))
        cout << "Path exists between " << st << " and " << end << endl;
    else
        cout << "No path exists between " << st << " and " << end << endl;
    return 0;
}
