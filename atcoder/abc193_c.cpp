/*
  user: zebnel
  created: 2025-09-15 09:42:03
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
  set<ll> reachable;
  ll limit = 1e10;
  for (ll b = 2; b <= int(1e5); b++) {
    ll mult = b;
    while (mult * b <= limit) {
      reachable.insert(mult * b);
      mult = mult * b;
    }
  }
  ll cnt = 0;
  for (ll x : reachable) {
    cnt += (x <= n);
  }
  cout << n - cnt << '\n';

  return 0;
}

