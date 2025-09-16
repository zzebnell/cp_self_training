/*
  user: zebnel
  created: 2025-09-16 15:55:57
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
    if (n == k) {
      for (int i = 0; i < n; i++) {
        cout << 1 << ' ';
      }
      cout << '\n';
      continue;
    }
    if (k > 1) {
      cout << -1 << '\n';
      continue;
    }
    cout << 1 << ' ';
    for (int i = 0; i < n - 1; i++) {
      cout << 2 << ' ';
    }
    cout << '\n';
  }

  return 0;
}

