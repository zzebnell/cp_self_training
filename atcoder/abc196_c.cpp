/*
  user: zebnel
  created: 2025-09-13 22:53:49
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
  ll limit = 1e6 + 1;
  ll ans = 0;
  for (ll i = 1; i <= limit; i++) {
    string s = to_string(i);
    s.append(s);
    if (stoll(s) >= 1 && stoll(s) <= n) {
      ans++;
    }
  }
  cout << ans << '\n';

  return 0;
}

