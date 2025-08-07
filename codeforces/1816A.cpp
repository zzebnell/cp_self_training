/*
  user: zebnel
  created: 2025-08-04 20:48:28
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
    int a, b;
    cin >> a >> b;
    if (a == 1 || b == 1) {
      cout << 1 << '\n';
      cout << a << ' ' << b << '\n';
      continue;
    }
    cout << 2 << '\n';
    cout << (a - 1) << ' ' << 1 << '\n';
    cout << a << ' ' << b << '\n';
  }

  return 0;
}

