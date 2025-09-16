/*
  user: zebnel
  created: 2025-09-16 16:51:10
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
    int n, c, d;
    cin >> n >> c >> d;
    vector<vector<int>> v(n, vector<int>(n));
    vector<int> b(n * n);
    for (int i = 0; i < int(b.size()); i++) {
      cin >> b[i];
    }
    v[0][0] = *min_element(b.begin(), b.end());
    multiset<int> mst;
    mst.insert(v[0][0]);
    for (int i = 1; i < n; i++) {
      v[i][0] = v[i - 1][0] + c;
      mst.insert(v[i][0]);
    }
    for (int j = 1; j < n; j++) {
      v[0][j] = v[0][j - 1] + d;
      mst.insert(v[0][j]);
    }
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
        v[i][j] = v[i - 1][j] + c;
        mst.insert(v[i][j]);
      }
    }
    multiset<int> mst2(b.begin(), b.end());
    cout << (mst2 == mst ? "YES" : "NO") << '\n';
  }

  return 0;
}

