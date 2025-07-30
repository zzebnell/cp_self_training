/*
  user: zebnel
  created: 2025-07-30 00:00:32
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = (n + 1) / 2;
    cout << ans << '\n';
    int l, r;
    l = 1;
    r = 3 * n;
    for (int i = 0; i < ans; i++) {
      cout << l << ' ' << r << '\n';
      l += 3;
      r -= 3;
    }
  }

  return 0;
}

