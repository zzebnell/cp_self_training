/*
  user: zebnel
  created: 2025-09-08 08:08:22
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("maxcross.in", "r", stdin);
  freopen("maxcross.out", "w", stdout);

  int n, k, b;
  cin >> n >> k >> b;
  vector<int> v(n, 1);
  for (int i = 0; i < b; i++) {
    int x;
    cin >> x;
    x--;
    v[x]--;
  }
  vector<int> p(n + 1);
  for (int i = 0; i < n; i++) {
    p[i + 1] = p[i] + v[i];
  }
  int ans = INF;
  for (int i = k - 1; i < n; i++) {
    int s = p[i + 1] - p[i - (k - 1)];
    ans = min(ans, k - s);
  }
  cout << ans << '\n';

  return 0;
}

