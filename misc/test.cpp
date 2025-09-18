/*
  user: zebnel
  created: 2025-09-18 10:12:06
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
  sort(v.begin(), v.end());
  int k;
  cin >> k;
  while (k--) {
    int a, b;
    cin >> a >> b;
    int l = -1, r = n;
    while (r - l > 1) {
      int m = l + (r - l) / 2;
      if (v[m] >= a) {
        r = m;
      } else {
        l = m;
      }
    }
    int inf = r;
    l = -1, r = n;
    while (r - l > 1) {
      int m = l + (r - l) / 2;
      if (v[m] > b) {
        r = m;
      } else {
        l = m;
      }
    }
    cout << (r - inf) << ' ';
  }
  cout << '\n';

  return 0;
}

