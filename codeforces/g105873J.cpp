/*
  user: zebnel
  created: 2025-09-08 14:12:18
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
  string ss;
  cin >> ss;
  string s = "#";
  s.append(ss);
  vector<bitset<26>> p(n + 1);
  for (int i = 1; i <= n; i++) {
    bitset<26> b;
    b.set(s[i] - 'a');
    p[i] = p[i - 1] ^ b;
  }
  vector<ll> v(1 << 26, INF);
  v[0] = 0;
  ll ans = -7LL * INF;
  for (int i = 1; i <= n; i++) {
    // search por same for 000...
    ans = max(ans, i - v[p[i].to_ullong()]);
    // search for each 1000..., 0100..., 0010...
    for (int j = 0; j < 26; j++) {
      ans = max(ans, i - v[ p[i].to_ullong() ^ (1LL << j) ] );
    }
    v[p[i].to_ullong()] = min(v[p[i].to_ullong()], (ll) i);
  }
  cout << ans << '\n';

  return 0;
}

