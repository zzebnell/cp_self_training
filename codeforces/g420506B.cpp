/*
  user: zebnel
  created: 2025-09-15 11:23:03
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> basket(m);
  for (int i = 0; i < n; i++) {
    basket[0].push_back(i);
  }
  while (q--) {
    char tq;
    cin >> tq;
    if (tq == 's') {
      int a, b;
      cin >> a >> b;
      basket[b].push_back(basket[a].back());
      basket[a].pop_back();
    } else {
      int a, i;
      cin >> a >> i;
      if (i < int(basket[a].size())) {
        cout << basket[a][i] << '\n';
      } else {
        cout << -1 << '\n';
      }
    }
  }

  return 0;
}

