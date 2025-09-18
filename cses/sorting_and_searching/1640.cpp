/*
  user: zebnel
  created: 2025-09-18 10:30:56
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
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
    v[i].second = i + 1;
  }
  sort(v.begin(), v.end());
  bool found = 0;
  for (int i = 0; i < n && !found; i++) {
    int target = x - v[i].first;
    int l = i, r = n;
    while (r - l > 1) {
      int m = l + (r - l) / 2;
      if (v[m].first <= target) {
        l = m;
      } else {
        r = m;
      }
    }
    if (l > i && v[l].first == target) {
      cout << v[i].second << ' ' << v[l].second << '\n';
      found = 1;
    }
  }
  if (!found) {
    cout << "IMPOSSIBLE" << '\n';
  }

  return 0;
}

