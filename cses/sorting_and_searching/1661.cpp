/*
  user: zebnel
  created: 2025-09-06 11:56:44
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  map<ll, ll> um;
  um[0]++;
  ll sum = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (um.count(sum - x)) {
      ans += um[sum - x];
    }
    um[sum]++;
  }
  cout << ans << '\n';

  return 0;
}

