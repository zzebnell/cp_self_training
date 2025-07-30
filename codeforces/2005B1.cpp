/*
  user: zebnel
  created: 2025-07-30 00:39:31
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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> p(m), d(q);
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }
    for (int i = 0; i < q; i++) {
      cin >> d[i];
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < q; i++) {
      auto it = upper_bound(p.begin(), p.end(), d[i]);
      if (it == p.end()) { // no in front
        cout << (n - *(--it)) << '\n';
      } else {
        if (it == p.begin()) { // no in back
          cout << *it - 1 << '\n';
        } else {
          int dist = (*it - *(--it)) - 1;
          cout << ((dist + 1) / 2) << '\n';
        }
      }
    }
  }

  return 0;
}
