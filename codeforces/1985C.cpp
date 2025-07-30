/*
  user: zebnel
  created: 2025-07-30 01:17:34
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
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    set<int64_t> st;
    int ans = 0;
    int64_t sum = 0;
    for (int x : v) {
      st.insert(x);
      sum += x;
      if (sum & 1) {
        continue;
      }
      if (st.count(sum / 2)) {
        ans++;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

