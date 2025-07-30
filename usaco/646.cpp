/*
  user: zebnel
  created: 2025-07-30 14:15:29
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;

class UnionFind {
  private:
    vector<int> p, rank;
  public:
    UnionFind(int n) {
      p.assign(n, 0);
      rank.assign(n, 0);
      iota(p.begin(), p.end(), 0);
    }
    int find(int i) {
      return (p[i] == i ? i : p[i] = find(p[i]));
    }
    bool same(int i, int j) {
      return (find(i) == find(j));
    }
    bool unite(int i, int j) {
      if (same(i, j)) {
        return 0;
      }
      int x, y;
      x = find(i);
      y = find(j);
      if (rank[x] > rank[y]) {
        swap(x, y);
      }
      p[x] = y;
      if (rank[x] == rank[y]) {
        rank[y]++;
      }
      return 1;
    }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  freopen("closing.in", "r", stdin);
  freopen("closing.out", "w", stdout);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<string> ans;
  ans.push_back("YES");
  vector<bool> open(n);
  vector<int> order(n);
  for (int i = 0; i < n; i++) {
    cin >> order[i];
    order[i]--;
  }
  reverse(order.begin(), order.end());
  open[order[0]] = 1;
  int cc = 1;
  UnionFind dsu(n);
  for (int i = 1; i < n; i++) {
    open[order[i]] = 1;
    cc++;
    for (int v : g[order[i]]) {
      if (open[v]) {
        if (dsu.unite(order[i], v)) {
          cc--;
        }
      }
    }
    ans.push_back(cc == 1 ? "YES" : "NO");
  }
  reverse(ans.begin(), ans.end());
  for (string s : ans) {
    cout << s << '\n';
  }

  return 0;
}
