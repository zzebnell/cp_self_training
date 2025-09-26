/*
  user: zebnel
  created: 2025-09-25 15:28:29
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int same = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] == k) {
        same++;
      }
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < k; i++) {
      if (binary_search(v.begin(), v.end(), i)) {
        continue;
      } else {
        ans++;
        if (same) {
          same--;
        }
      }
    }
    cout << (ans + same) << '\n';
  }

  return 0;
}

