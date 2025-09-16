/*
  user: zebnel
  created: 2025-09-06 11:28:14
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("hps.in", "r", stdin);
  freopen("hps.out", "w", stdout);

  int n;
  cin >> n;
  vector<vector<int>> v(3, vector<int>(n)); // 0 -> H ; 1 -> P ; 2 -> S
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == 'H') {
      v[0][i] = 1;
    } else if (c == 'P') {
      v[1][i] = 1;
    } else {
      v[2][i] = 1;
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 1; j < n; j++) {
      v[i][j] += v[i][j - 1];
    }
  }
  int ans = -1;
  int totH = v[0][n - 1];
  int totP = v[1][n - 1];
  int totS = v[2][n - 1];
  for (int i = 0; i < n; i++) {
    ans = max(ans, max({v[0][i], v[1][i], v[2][i]}) + max({totH - v[0][i], totP - v[1][i], totS - v[2][i]}));
  }
  cout << ans << '\n';

  return 0;
}

