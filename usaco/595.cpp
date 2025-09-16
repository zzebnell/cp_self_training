/*
  user: zebnel
  created: 2025-09-06 11:15:17
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);

  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  ll ans = -1;
  for (int i = 0; i < n; i++) {
    int j = i;
    ll sum = 0;
    while (j < n) {
      sum += v[j];
      if (sum % 7 == 0) {
        ans = max(ans, j - i + 1LL);
      }
      j++;
    }
  }
  cout << max(ans, 0LL) << '\n';

  return 0;
}

