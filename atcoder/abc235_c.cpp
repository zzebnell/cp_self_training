/*
  user: zebnel
  created: 2025-09-18 10:40:00
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mp[v[i]].push_back(i + 1);
  }
  while (q--) {
    int x, k;
    cin >> x >> k;
    if (mp.count(x)) {
      k--;
      if (k < (int) mp[x].size()) {
        cout << mp[x][k] << '\n';
      } else {
        cout << -1 << '\n';
      }
    } else {
      cout << -1 << '\n';
    }
  }

  return 0;
}

