/*
  user: zebnel
  created: 2025-12-08 18:31:56
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

void dfs(int u, vector<vector<int>>& g, vector<bool>& visited) {
  visited[u] = 1;
  for (int v : g[u]) {
    if (!visited[v]) {
      dfs(v, g, visited);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    g[y].push_back(x);
  }
  int q;
  cin >> q;
  vector<bool> visited(n);
  while (q--) {
    int tp, v;
    cin >> tp >> v;
    v--;
    if (tp == 1) {
      if (!visited[v]) {
        dfs(v, g, visited);
      }
    } else {
      cout << (visited[v] ? "Yes" : "No") << '\n';
    }
  }

  return 0;
}

