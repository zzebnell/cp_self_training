/*
  user: zebnel
  created: 2025-09-16 14:26:18
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
    vector<pair<ll, ll>> m(n);
    for (int i = 0; i < n; i++) {
      cin >> m[i].first;
    }
    for (int i = 0; i < n; i++) {
      cin >> m[i].second;
    }
    sort(m.begin(), m.end(), [&](const pair<int, int>& p1, const pair<int, int>& p2) {
        if (abs(p1.second) == abs(p2.second)) {
          return p1.first < p2.first;
        }
        return abs(p1.second) < abs(p2.second);
        });
    vector<ll> p(n + 1);
    for (int i = 0; i < n; i++) {
      p[i + 1] = p[i] + m[i].first;
    }
    bool ok = 1;
    for (int i = 0; i < n && ok; i++) {
      ll s = (p[i + 1] + k - 1) / k;
      ok = s <= abs(m[i].second);
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }

  return 0;
}

