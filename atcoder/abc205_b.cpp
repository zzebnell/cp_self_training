/*
  user: zebnel
  created: 2025-09-13 21:38:44
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;
  vector<ll> v(n + 1);
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    v[x]++;
  }
  bool ok = 1;
  for (int i = 1; i <= n; i++) {
    ok = ok && (v[i] == 1);
  }
  cout << (ok ? "Yes" : "No") << '\n';

  return 0;
}

