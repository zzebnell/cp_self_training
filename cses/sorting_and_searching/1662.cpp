/*
  user: zebnel
  created: 2025-09-07 19:36:18
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  map<int, int> m;
  m[0]++;
  ll s = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll x = v[i] % n;
    s += x;
    s %= n;
    if (m.count(s)) {
      ans += m[s];
    }
    if (m.count(s + n)) {
      ans += m[s + n];
    }
    if (m.count(s - n)) {
      ans += m[s - n];
    }
    m[s]++;
  }
  cout << ans << '\n';

  return 0;
}

