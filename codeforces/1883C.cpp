/*
  user: zebnel
  created: 2025-09-19 17:22:10
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
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    ll ans = INF;
    for (int i = 0; i < n; i++) {
      ans = min(ans, (k - (v[i] % k)) % k);
    }
    if (k == 4) {
      int odds = 0;
      for (int i = 0; i < n; i++) {
        if (v[i] & 1) {
          odds++;
        }
      }
      int evens = n - odds;
      ans = min(ans, max(2LL - evens, 0LL));
    }
    cout << ans << '\n';
  }

  return 0;
}

