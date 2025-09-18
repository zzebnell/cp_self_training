/*
  user: zebnel
  created: 2025-09-18 11:17:10
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

ll solve(int l, int r, vector<ll>& p) {
  if (l < r) {
    ll size = p[r + 1] - p[l];
    int m = l + (r - l) / 2;
    cout << "interval: " << l << ' ' << r << " - adding: " << size << '\n';
    ll m1 = solve(l, m, p);
    ll m2 = solve(m + 1, r, p);
    return size + m1 + m2;
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x, n;
  cin >> x >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  vector<ll> p(n + 1);
  for (int i = 0; i < n; i++) {
    p[i + 1] = d[i] + p[i];
  }
  ll ans = solve(0, n - 1, p);
  cout << ans << '\n';

  return 0;
}

