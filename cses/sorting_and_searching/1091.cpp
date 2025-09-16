/*
  user: zebnel
  created: 2025-09-15 11:37:32
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  multiset<int> st;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    if (st.empty()) {
      cout << -1 << '\n';
    } else {
      auto it = st.upper_bound(x);
      if (it == st.begin()) {
        cout << -1 << '\n';
        continue;
      }
      cout << *(--it) << '\n';
      st.erase(it);
    }
  }

  return 0;
}

