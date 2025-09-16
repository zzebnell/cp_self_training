/*
  user: zebnel
  created: 2025-09-13 21:58:06
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
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  ll x;
  cin >> x;
  ll s = accumulate(v.begin(), v.end(), 0LL);
  ll k = x / s;
  ll r = x % s;
  ll ps = 0;
  ll ex = 0;
  for (int i = 0; i < n; i++) {
    ps += v[i];
    if (ps > r) {
      ex++;
      break;
    }
    ex++;
  }
  cout << (n * k + ex) << '\n';

  return 0;
}

