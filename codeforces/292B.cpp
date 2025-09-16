/*
  user: zebnel
  created: 2025-09-04 22:45:12
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

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
  multiset<int> mst;
  for (int i = 0; i < n; i++) {
    mst.insert(g[i].size());
  }
  if (((int) mst.count(1) == 2) && ((int) mst.count(2) == (n - 2))) {
    cout << "bus topology" << '\n';
  } else if ((int) mst.count(2) == n) {
    cout << "ring topology" << '\n';
  } else if (((int) mst.count(n - 1) == 1) && ((int) mst.count(1) == n - 1)) {
    cout << "star topology" << '\n';
  } else {
    cout << "unknown topology" << '\n';
  }

  return 0;
}

