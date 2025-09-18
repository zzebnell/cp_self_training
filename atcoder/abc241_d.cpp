/*
  user: zebnel
  created: 2025-09-18 10:52:35
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q;
  cin >> q;
  multiset<ll> st;
  while (q--) {
    int tq;
    cin >> tq;
    if (tq == 1) {
      ll x;
      cin >> x;
      st.insert(x);
    } else if (tq == 2) { // less than equals
      ll x, k;
      cin >> x >> k;
      auto it = st.upper_bound(x);
      if (it == st.begin()) {
        cout << -1 << '\n';
        continue;
      }
      --it, k--;
      while (k && it != st.begin()) {
        --it;
        k--;
      }
      if (!k) {
        cout << *it << '\n';
      } else {
        cout << -1 << '\n';
      }
    } else { // greater than equals
      ll x, k;
      cin >> x >> k;
      auto it = st.lower_bound(x);
      if (it == st.end()) {
        cout << -1 << '\n';
        continue;
      }
      k--;
      while (k && it != st.end()) {
        ++it;
        k--;
      }
      if (!k && it != st.end()) {
        cout << *it << '\n';
      } else {
        cout << -1 << '\n';
      }
    }
  }

  return 0;
}

