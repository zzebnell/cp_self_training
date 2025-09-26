/*
  user: zebnel
  created: 2025-09-25 15:19:37
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
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0, negs = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (!v[i]) {
        ans++;
      } else if (v[i] < 0) {
        negs++;
      }
    }
    if (negs & 1) {
      ans += 2;
    }
    cout << ans << '\n';
  }

  return 0;
}

