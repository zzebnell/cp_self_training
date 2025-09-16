/*
  user: zebnel
  created: 2025-09-16 17:33:54
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

bool check(int fn, int w, int l, int h) {
  return (fn <= w && fn <= l && fn <= h);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> fib = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int fn = fib[n - 1];
    int fn1 = fib[n - 2];
    string ans = "";
    for (int i = 0; i < m; i++) {
      int w, l, h;
      cin >> w >> l >> h;
      // can i with fn?
      if (check(fn, w, l, h)) { // now check for fn1
        int w1, w2, w3, l1, l2, l3, h1, h2, h3;
        w1 = w - fn, l1 = l     , h1 = h;
        w2 = w     , l2 = l - fn, h2 = h;
        w3 = fn    , l3 = fn    , h3 = h - fn;
        if (check(fn1, w1, l1, h1) || check(fn1, w2, l2, h2) || check(fn1, w3, l3, h3)) {
          ans.push_back('1');
        } else {
          ans.push_back('0');
        }
      } else {
        ans.push_back('0');
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

