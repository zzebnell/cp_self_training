/*
  user: zebnel
  created: 2025-09-16 16:05:12
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
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    set<int> st(v.begin(), v.end());
    cout << (int(st.size()) == 2 ? n / 2 + 1 : n) << '\n';
  }

  return 0;
}

