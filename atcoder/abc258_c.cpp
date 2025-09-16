/*
  user: zebnel
  created: 2025-09-15 10:15:24
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  int j = 0;
  while (q--) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      j = (j + x) % n;
    } else {
      x--;
      if (x < j) {
        // j - k = x
        // j - x = k
        int k = j - x;
        cout << s[ (- k) % n + n ] << '\n';
      } else { // x >= j
        int k = x - j;
        cout << s[k % n] << '\n';
      }
    }
  }

  return 0;
}

