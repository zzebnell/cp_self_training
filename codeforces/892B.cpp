/*
  user: zebnel
  created: 2025-09-09 17:29:10
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
  int i = n - 1;
  vector<int> live(n, 1);
  while (i >= 0) {
    if (v[i]) {
      int k = v[i];
      i--;
      while (i >= 0 && k) {
        live[i] = 0;
        k--;
        k = max(k, v[i]);
        i--;
      }
    } else {
      i--;
    }
  }
  cout << (accumulate(live.begin(), live.end(), 0)) << '\n';

  return 0;
}

