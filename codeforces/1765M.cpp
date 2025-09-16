/*
  user: zebnel
  created: 2025-09-15 18:45:13
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll ans = 1e18;
    pair<ll, ll> pans;
    for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        if (i && (n - i)) {
          ll lcm = i * (n - i) / __gcd(i, n - i);
          if (lcm < ans) {
            pans = {i, n - i};
            ans = lcm;
          }
        }
        ll other = n / i;
        if (other && (n - other)) {
          ll lcm = other * (n - other) / __gcd(other, n - other);
          if (lcm < ans) {
            pans = {other, n - other};
            ans = lcm;
          }
        }
      }
    }
    cout << pans.first << ' ' << pans.second << '\n';
  }

  return 0;
}
