/*
  user: zebnel
  created: 2025-09-25 15:23:31
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = -INF;
    for (int i = 0; i < n; i += 2) {
      ans = max(ans, abs(v[i] - v[i + 1]));
    }
    cout << ans << '\n';
  }

  return 0;
}

