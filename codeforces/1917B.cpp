/*
  user: zebnel
  created: 2026-01-03 20:18:35
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
    string s;
    cin >> s;
    vector<vector<int>> pos(27);
    for (int i = 0; i < n; i++) {
      pos[s[i] - 'a'].push_back(i);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      auto it = upper_bound(pos[s[i] - 'a'].begin(), pos[s[i] - 'a'].end(), i);
      if (it == pos[s[i] - 'a'].end()) {
        ans += n - i;
      } else {
        ans += *it - i;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

