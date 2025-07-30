/*
  user: zebnel
  created: 2025-07-29 23:52:49
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
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 1) {
      cout << 1 << '\n';
      continue;
    }
    cout << (r - l) << '\n';
  }

  return 0;
}

