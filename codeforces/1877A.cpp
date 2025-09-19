/*
  user: zebnel
  created: 2025-09-19 16:59:33
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
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
      cin >> v[i];
    }
    cout << -accumulate(v.begin(), v.end(), 0) << '\n';
  }

  return 0;
}

