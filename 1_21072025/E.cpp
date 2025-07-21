// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int dist_bfs(vector<vector<int>>& g, int u){
  vector<int> dis(g.size(), -1);
  queue<int> q;
  dis[u]=0;
  q.push(u);
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    for (int v: g[node])
    {
      if (dis[v] == -1)
      {
        dis[v] = dis[node]+1;
        q.push(v);
      }
      
    }
    
  }
  return dis.size()-1;
}

void solve() {
    int n, m, cnt1=0;
    vector<vector<int>> gr(n);
    vector<vector<int>> gr2(n);
    for (int i=0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      gr[a].push_back(b);
      gr[b].push_back(a);
    }
    while (true)
    {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      gr[a].push_back(b);
      gr[b].push_back(a);
    }
    
 
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/