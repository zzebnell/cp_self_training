/*
  user: zebnel
  created: 2025-09-15 09:36:39
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
  vector<ll> v(n);
  ll ss = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    ss += v[i] * v[i];
  }
  ll ans = (n - 1) * ss;
  ll p = v[0];
  ll ps = 0;
  for (int i = 1; i < n; i++) {
    ps += v[i] * p;
    p += v[i];
  }
  cout << (ans - 2 * ps) << '\n';

  return 0;
}

