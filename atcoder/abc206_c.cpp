/*
  user: zebnel
  created: 2025-09-13 21:48:19
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
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mp[v[i]]++;
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll rest = n - (i + 1);
    mp[v[i]]--;
    ans += rest - mp[v[i]];
  }
  cout << ans << '\n';

  return 0;
}

