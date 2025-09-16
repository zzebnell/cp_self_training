/*
  user: zebnel
  created: 2025-09-15 10:59:28
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, w;
  cin >> n >> w;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.rbegin(), v.rend());
  ll ans = 0;
  for (int i = 0; i < n && w; i++) {
    ll use = min(v[i].second, w);
    ans += use * v[i].first;
    w -= use;
  }
  cout << ans << '\n';

  return 0;
}

