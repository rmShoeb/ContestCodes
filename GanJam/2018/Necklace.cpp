#include<bits/stdc++.h>

using namespace std;

vector < int > adj[100012];
int visited[100012];

int bfs(int s, int n)
{
    for(int i = 0 ; i <= n ; ++i)
    {
        visited[i] = 0;
    }
    queue < int > q;
    q.push(s);
    visited[s] = 1;
    int max = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(adj[u].size() == 0)
        {
            return 1;
        }
        for(int i = 0 ; i < adj[u].size() ; ++i)
        {
            if(visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                q.push(v);
                max++;
            }
        }
    }

    return max;
}

int main()
{
    int testCase, num, inp, max;
    cin >> testCase;
    for(int i = 1 ; i <= testCase ; ++i)
    {
        max = -99999999;
        cin >> num;
        for(int j = 0 ; j < num ; ++j)
        {
            cin >> inp;
            adj[j].push_back(inp);
        }
        for(int j = 0 ; j < num ; ++j)
        {
            int source = adj[j][0];
            if(visited[source] != 1)
            {
              if(bfs(source, num) > max)
              {
                  max = bfs(source, num);
              }
            }
        }
        cout << "Case " << i << ": " << max << endl;
    }

    return 0;
}
