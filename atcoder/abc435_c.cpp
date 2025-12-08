/*
  user: zebnel
  created: 2025-12-08 17:52:05
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int done = 0;
  int curr = v[0] - 1;
  done++;
  for (int i = 1; i < n; i++) {
    if (i <= curr) {
      curr = max(curr, i + v[i] - 1);
      done++;
    }
  }
  cout << done << '\n';

  return 0;
}

