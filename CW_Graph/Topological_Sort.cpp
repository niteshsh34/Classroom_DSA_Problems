#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
#include <queue>
using namespace std;
int v;
vector<list<int>> graph;
void add_edges(int src, int des, bool bidi)
{
    graph[src].push_back(des);
    if (bidi)
    {
        graph[des].push_back(src);
    }
}
void topo()
{
    queue<int> q;
    vector<int> indegree(v, 0);
    unordered_set<int> visited;
    int n = graph.size();
    for (int i = 0; i < v; i++)
    {
        for (auto neighbour : graph[i])
        {
            indegree[neighbour]++;
        }
    }
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
            visited.insert(i);
        }
    }
    while (!q.empty())
    {
        int fro = q.front();
        q.pop();
        cout << fro << "  ";
        for (auto neighbour : graph[fro])
        {
            if (visited.find(neighbour) == visited.end())
            {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0)
                {
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}

int main()
{
    int e;
    cout << "Enter no of vertices: -";
    cin >> v;
    cout << "Enter no of edges: -";
    cin >> e;
    cout << "Enter edges:- ";
    graph.resize(v, list<int>());
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edges(x, y, false);
    }
    topo();
}
