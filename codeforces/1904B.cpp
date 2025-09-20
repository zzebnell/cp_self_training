/*
  user: zebnel
  created: 2025-09-20 15:52:36
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
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i].first;
      v[i].second = i;
    }
    sort(v.begin(), v.end());
    vector<ll> p(n + 1);
    for (int i = 0; i < n; i++) {
      p[i + 1] = p[i] + v[i].first;
    }
    vector<ll> bs(n);
    for (int i = 1; i < n; i++) {
      if (v[i].first > p[i]) {
        bs[i] =  1;
      }
    }
    for (int i = 1; i < n; i++) {
      bs[i] = bs[i - 1] + bs[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      int part = upper_bound(bs.begin(), bs.end(), bs[i]) - bs.begin() - 1;
      ans[v[i].second] = part;
    }
    for (int x : ans) {
      cout << x << ' ';
    }
    cout << '\n';
  }

  return 0;
}

