/*
  user: zebnel
  created: 2025-12-08 17:47:22
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
  vector<int> ps(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    ps[i + 1] = ps[i] + v[i];
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      bool is = 1;
      for (int k = i; k <= j; k++) {
        if ((ps[j + 1] - ps[i]) % v[k] == 0) {
          is = 0;
          break;
        }
      }
      cnt += is;
    }
  }
  cout << cnt << '\n';

  return 0;
}

