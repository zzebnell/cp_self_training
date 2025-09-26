/*
  user: zebnel
  created: 2025-09-26 18:45:46
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

ll f(ll x, vector<ll>& v) { // how much it cost to start with to x
  ll ans = 0;
  int n = v.size();
  for (int i = 0; i < n; i++) {
    ans += abs(v[i] - (x + i));
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  ll l = -1e10 - 1, r = 1e10 + 1;
  while (r - l > 3) {
    ll delta = (r - l) / 3;
    ll m1 = l + delta;
    ll m2 = r - delta;
    if (f(m1, v) <= f(m2, v)) {
      r = m2;
    } else {
      l = m1;
    }
  }
  ll ans = 1e14;
  for (int i = l; i <= r; i++) {
    ans = min(ans, f(i, v));
  }
  cout << ans << '\n';

  return 0;
}

