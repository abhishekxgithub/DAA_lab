// BFS DFS
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[8];
DFS(int s, int V)
{
    vector<bool> visited(V, false);

    stack<int> stack;
    stack.push(s);

    while (!stack.empty())
    {
        int s = stack.top();
        stack.pop();
        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }
        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
}

void BFS(int s, int V)
{
    vector<bool> visited;
    visited.resize(V, false);
    list<int> queue1;
    visited[s] = true;
    queue1.push_back(s);

    while (!queue1.empty())
    {
        s = queue1.front();
        cout << s << " ";
        queue1.pop_front();
        for (auto adjecent : adj[s])
        {
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                queue1.push_back(adjecent);
            }
        }
    }
}
void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);

    cout << "BFS= ";
    BFS(0, 8);
    cout << "\nDFS= ";
    DFS(0, 8);

    return 0;
}